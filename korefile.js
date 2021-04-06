let fs = require('fs');
let path = require('path');
let project = new Project('App');
project.addDefine('HXCPP_API_LEVEL=332');
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{}};
project.setDebugDir('build/pi');
await project.addProject('build/pi-build');
await project.addProject('c:/Program Files/WindowsApps/5649RobertKonrad.KodeStudio_18.11.0.0_x64__j9akr42m5hw02/resources/app/kodeExtensions/kha/Kha');
resolve(project);
