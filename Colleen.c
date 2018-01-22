#include <stdio.h>
/*
   TOTO
*/
int lol(){return 0;}int main(){
/*
   TATA
*/
lol();char *a="#include <stdio.h>%c/*%c   TOTO%c*/%cint lol(){return 0;}int main(){%c/*%c   TATA%c*/%clol();char *a=%c%s%c;printf(a,10,10,10,10,10,10,10,10,34,a,34,10);}%c";printf(a,10,10,10,10,10,10,10,10,34,a,34,10);}
