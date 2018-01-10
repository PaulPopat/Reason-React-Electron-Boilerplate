const fs = require("fs");
const shell = require('shelljs');
const path = require("path");
var rimraf = require('rimraf');

var ofType = function(extension, directory) {
    var result = [];
    var files = fs.readdirSync(directory);
    files.forEach(f => {
        var name = directory + "/" + f;
        if (f.endsWith(extension)) {
            result.push(name);
        } else if (fs.statSync(name).isDirectory()) {
            var results = ofType(extension, name);
            results.forEach(r => result.push(r));
        }
    });

    return result;
};

var copy = function(file, target) {
    console.log("Copying " + file + " to " + target);
    shell.mkdir("-p", path.dirname(target));
    fs.createReadStream(file).pipe(fs.createWriteStream(target));
};

var deleteFile = function(file) {
    fs.unlinkSync(file);
};

rimraf("/dist", function() {
    console.log("Cleared dist folder.");
    var files = ofType(".js", "view");
    files.forEach(f => {
        copy(f, f.replace("view/", "dist/"));
        deleteFile(f);
    });

    var files = ofType(".js", "app");
    files.forEach(f => {
        copy(f, f.replace("app/", "dist/"));
    });

    copy("index.html", "dist/index.html");
    copy("app/main.js", "dist/main.js");
});