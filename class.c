#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
int main(int argc,char *argv[]){
int fd;
char buffer[512];
//open file for reading
fd=open(argv[1],O_RDONLY);
if(fd<0){
printf("file does not exist\n");
exit(1);
}
//clear file
bzero(buffer,512);
read(fd,buffer,sizeof(buffer));
//display
printf("%s\n",buffer);
return 0;
}
