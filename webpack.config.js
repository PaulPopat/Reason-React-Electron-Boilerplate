/*jshint esversion: 6 */
const CopyWebpackPlugin = require("copy-webpack-plugin");
const path = require("path");

module.exports = {
    entry: {
        index: "./view/index.bs.js"
    },
    output: {
        path: path.join(__dirname, "dist"),
        filename: "[name].js"
    },
    context: __dirname,
    node: {
        fs: 'empty'
    },
    plugins: [
        new CopyWebpackPlugin([
            {
                from: "index.html",
                to: "index.html"
            }
        ]),
        new CopyWebpackPlugin([
            {
                from: "app",
                to: ""
            }
        ]),
        new CopyWebpackPlugin([
            {
                from: "resources",
                to: "resources"
            }
        ])
    ]
};