fs=require("fs")
cp=require("child_process")
var i=5;
var j=i-1;
(function lol(){if(i>=0){fs.writeFile('Sully_'+i+'.js', 'fs=require("fs")\ncp=require("child_process")\nvar i='+j+';\nvar j=i-1;\n('+String(lol)+')();', () => {cp.execSync('node Sully_'+i+'.js', 'inherit')})}})();