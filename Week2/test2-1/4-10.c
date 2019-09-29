#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	FILE * fp;
	char ch;
	if((fp=fopen("4-10.txt","a+"))==NULL)
	{
		printf("open(creat)file has error");
		exit(0);

	}
	printf("please input write to file a char:");
	fputc((ch=fgetc(stdin)),fp);
	fclose(fp);
}
