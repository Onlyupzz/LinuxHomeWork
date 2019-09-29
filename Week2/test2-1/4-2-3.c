#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int fdsrc,fddes,nbytes;
	int flags = O_CREAT | O_TRUNC | O_WRONLY;
	int z;
	char buf[20],src[20],des[20];
	printf("input aim filename:");
	scanf("%s",des);
	fdsrc = open("/home/rlk/test2-1/2.txt",O_RDONLY);
	if(fdsrc<0)
	{
		exit(1);
	}
	fddes=open(des,flags,0644);
	if(fddes<0)
	{
		exit(1);
	}
	while((nbytes=read(fdsrc,buf,20))>0)
	{
		z=write(fddes,buf,nbytes);
		if(z<0)
		{
			printf("write aim file has error!");
		}
	}
	close(fdsrc);
	close(fdsrc);
	printf("copy /home/rlk/test2-1/2.txt file is'%s' file success!\n",des);
	exit(0);
}
