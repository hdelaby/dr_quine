#include <stdio.h>
/*
   TOTO
*/
int lol(){return 0;}int main(){FILE *file=fopen("Grace_kid.c", "w+");
/*
   TATA
*/
lol();char *a="#include <stdio.h>%c/*%c   TOTO%c*/%cint lol(){return 0;}int main(){FILE *file=fopen(%cGrace_kid.c%c, %cw+%c);%c/*%c   TATA%c*/%clol();char *a=%c%s%c;fprintf(file,a,10,10,10,10,34,34,34,34,10,10,10,10,34,a,34,10);}%c";fprintf(file,a,10,10,10,10,34,34,34,34,10,10,10,10,34,a,34,10);}
