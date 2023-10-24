#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
int main(int argc,char *argv[])
{
	int fd;
	if((fd = open(argv[1],O_RDONLY)) == -1)
		perror(argv[1]);
