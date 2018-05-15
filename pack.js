const { execSync } = require("child_process");
const fs = require("fs");
const sass = require("node-sass");
const path = require("path");
const process = require("process");
const shell = require("shelljs");
const request = require("sync-request");
const unzip = require("unzip");

const copy = (file, target) => {
    shell.mkdir("-p", path.dirname(target));
    fs.createReadStream(file).pipe(fs.createWriteStream(target));
};

const deleteFolderRecursive = (dir) => {
    if (fs.existsSync(dir)) {
        const files = fs.readdirSync(dir);
        for (const file of files) {
            const curPath = dir + "/" + file;
            if (fs.lstatSync(curPath).isDirectory()) {
                deleteFolderRecursive(curPath);
                continue;
            }

            fs.unlinkSync(curPath);
        }

        fs.rmdirSync(dir);
    }
};

const ofType = (extension, directory) => {
    const result = [];
    const files = fs.readdirSync(directory);
    for (const file of files) {
        const name = directory + "/" + file;
        if (file.endsWith(extension)) {
            result.push(name);
            continue;
        }

        if (fs.statSync(name).isDirectory()) {
            const results = ofType(extension, name);
            for (const r of results) {
                result.push(r);
            }
        }
    }

    return result;
};

const deleteFile = (file) => {
    fs.unlinkSync(file);
};

const build = () => {
    console.log("Running install");
    execSync("npm install", { stdio: [0, 1, 2] });

    console.log("Clearing dist folder.");
    deleteFolderRecursive("dist");

    console.log("Making new dist folder");
    shell.mkdir("-p", "dist");

    console.log("Building sass");
    const styles = sass.renderSync({ file: "styles/index.scss"});
    fs.writeFileSync("dist/index.css", styles.css, { encoding: "utf-8" });

    console.log("Building javascript");
    execSync("./node_modules/.bin/bsb -clean-world", { stdio: [0, 1, 2] });
    execSync("./node_modules/.bin/bsb -make-world", { stdio: [0, 1, 2] });
};

const serve = () => {
    build();

    console.log("Serving application");
    execSync("./node_modules/.bin/electron .", { stdio: [0, 1, 2] });
};

const pack = (url, target) => {
    const location = "./binaries/" + target;
    let appLocation = location + "/resources/app";
    if (target === "darwin") {
        appLocation = location + "/Electron.app/Contents/Resources/app";
    }

    build();

    console.log("Removing old binaries");
    deleteFolderRecursive(location);

    console.log("Downloading binaries");
    const zip = request("GET", url).getBody();
    shell.mkdir("-p", "binaries");
    fs.writeFileSync(location + ".zip", zip);
    fs.createReadStream(location + ".zip").pipe(unzip.Extract({ path: location }));
    deleteFile(location + ".zip");

    console.log("Moving over distribution code");
    shell.mkdir("-p", appLocation);
    copy("package.json", appLocation + "/package.json");
    copy("index.html", appLocation + "/index.html");
    execSync("cp -r ./node_modules ./" + appLocation, { stdio: [0, 1, 2] });
    execSync("cp -r ./dist ./" + appLocation, { stdio: [0, 1, 2] });
};

const args = process.argv.slice(2);

switch (args[0]) {
    case "serve":
        serve();
        break;
    case "build":
        build();
        break;
    case "pack":
        pack(`https://github.com/electron/electron/releases/download/${args[2]}/electron-${args[2]}-${args[1]}-${args[3]}.zip`, args[1]);
        break;
    default:
        console.log("Unregonised command");
}
