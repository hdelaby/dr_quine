#include <stdio.h>
<<<<<<< HEAD
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
int	main(void){
int i=5,j=i-1;char a[100];
if (i>=0){sprintf(a, "Sully_%d.c", i);char *b="#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c#include <stdlib.h>%cint main(void){%cint i=%d,j=i-1;char a[100];%cif (i>=0){sprintf(a, %cSully_%cd.c%c, i);char *b=%c%s%c;int fd = open(a, 1537, 0644);dprintf(fd,b,10,10,10,10,10,j,10,34,37,34,34,b,34,10,34,37,37,34,34,46,37,34,10);%csprintf(a, %cclang -Wall -Wextra -Werror Sully_%cd.c -o Sully_%cd%c, i, i);system(a);sprintf(a, %c%c/Sully_%cd%c, i);execve(a, NULL, NULL);}}%c";int fd = open(a, 1537, 0644);dprintf(fd,b,10,10,10,10,10,j,10,34,37,34,34,b,34,10,34,37,37,34,34,46,37,34,10);
sprintf(a, "clang -Wall -Wextra -Werror Sully_%d.c -o Sully_%d", i, i);system(a);sprintf(a, "./Sully_%d", i);execve(a, NULL, NULL);}}
=======
#include <fnctl.h>
#include <stdlib.h>
int	main(void){
int i=5, j=i-1;
char str[12];
char a[100];
if (i>=0)
{
	sprintf(a, "Sully_%d", i);
	strcpy(s, "Sully_");
	strcat(s, str);
	int fd = open(s, 1537, 0644);
	dprintf(fd, "int i = %d; j = i - 1", );
	system("clang -Wall -Wextra -Werror Sully_);
	execve("./Gr"
}
}
>>>>>>> f225ee76e7fee0dffa32d20b8abf4adcfe2ab9a4
