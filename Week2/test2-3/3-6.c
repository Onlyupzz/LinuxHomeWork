#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main()
{
	int fd;
	int sk;
	int n;
	int r;
	char buf1[]="abcdefghij";
	char buf2[]="ABCDEFGHIJ";
	//fd = open("file.txt",O_RDWR);               //no O_APPEND
	fd=open("file.txt",O_RDWR | O_APPEND);
	if(fd<0)
	{
		printf("open file has error!");
	}
	else
	{
		sk = lseek(fd,0,SEEK_CUR);
		if(sk<0)
		{
			printf("Seek has error!");
		}
		else
		{
	
			printf("input n:");
			scanf("%d",&n);
			lseek(fd,n,SEEK_SET);
			 //WRITE
			if((write(fd,buf1,10))<0)
			{
				printf("write has error");
			}
			else
			{
				printf("write has success");
			}
			
			
			/* READ
			if((read(fd,buf2,10))<0)
			{
				printf("read has error");
			}
			else
			{
				printf("read has success!\n");

				printf("buf2:");
				printf("%s\n",&buf2);
			}
			*/
			
		}
	}
}
