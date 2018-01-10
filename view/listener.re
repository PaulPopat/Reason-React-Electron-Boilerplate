[%%bs.raw {|
var {ipcRenderer} = require('electron');  
|}];

let on: (string, (string, string) => unit) => unit = [%bs.raw {|
    function(id, handler) {
        ipcRenderer.on(id, handler);
    }|}];
let once: (string, (string, string) => unit) => unit = [%bs.raw {|
    function(id, handler) {
        ipcRenderer.once(id, handler);
    }|}];
let send: (string, string) => unit = [%bs.raw {|
    function(id, data) {
        ipcRenderer.send(id, data);
    }|}];