#include "uhead.h"
#define  BUFFERSIZE 100
void writedate(int *a,int n,const char *filename)
{
	int fd;
	char buffer[BUFFERSIZE];
	int s;
	int l=0;              //
	int i;
	
	fd=open(filename,O_RDWR | O_CREAT |O_TRUNC,0777);
	if(fd<0)
	{
		printf("open error");
		exit(1);
	}
	else{
		ftruncate(fd, 0);	
		for(i=0;i<10;i++)
		{
			l+=sprintf(buffer + l,"%d  ",a[i]);
		}
		s=write(fd,buffer,l);
		printf("SAVE OK");
		if(s<0)
		{
			printf("Write error");
			close(fd);
		}
			close(fd);
	}
}

void Showpath(const char*filename)
{
	int fd;
	struct stat statbuf;
	char file_path[100]={'0'};
	char buf[1024] = {'0'};
	fd=open(filename,O_RDWR | O_CREAT |O_TRUNC,0777);
	if(fd<0)
	{
		printf("Open error");
	}
	else
	{
		fstat(fd,&statbuf);
		snprintf(buf,sizeof(buf),"/proc/self/fd/%d",fd);
		if(readlink(buf,file_path,sizeof(file_path)-1)!=-1)
			printf("%s\n",file_path);
		else
			printf("Is Fail");
	}
}

