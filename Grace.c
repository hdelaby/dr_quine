#include <stdio.h>
#include <fcntl.h>
#define A "Grace_kid.c"
#define B 1537
/*
   TATA
*/
#define FT()int main(){int f=open(A, B, 0644);char *a="#include <stdio.h>%c#include <fcntl.h>%c#define A %cGrace_kid.c%c%c#define B 1537%c/*%c   TATA%c*/%c#define FT()int main(){int f=open(A, B, 0644);char *a=%c%s%c;dprintf(f,a,10,10,34,34,10,10,10,10,10,34,a,34,10,10);}%cFT()%c";dprintf(f,a,10,10,34,34,10,10,10,10,10,34,a,34,10,10);}
FT()
