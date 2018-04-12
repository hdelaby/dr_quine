fs=require("fs")
/*
TATA
*/
var a=1;
var b=2;
var c=3;
(function toto(){fs.writeFile('Grace_kid.js', 'fs=require("fs")\n/*\nTATA\n*/\nvar a=1;\nvar b=2;\nvar c=3;\n(' + String(toto) + ')();', () => {return 0;})})();