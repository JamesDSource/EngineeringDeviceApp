let fs = require('fs');
let path = require('path');
let project = new Project('App');
project.addDefine('HXCPP_API_LEVEL=332');
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{}};
project.setDebugDir('build/pi');
await project.addProject('build/pi-build');
await project.addProject('c:/Users/james/Desktop/KodeStudio/resources/app/kodeExtensions/kha/Kha');
resolve(project);
