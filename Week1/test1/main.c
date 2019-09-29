#include "uhead.h"

int main()
{
	int a[UNUMBER];
	int i;
	struct avg k;

	urand(a,UNUMBER);
	show(a,UNUMBER);
	writedate(a,UNUMBER,"rowdata.txt");
	
	printf("**********\n");
	k = getAvg(a,N);
	printf("Sum=%d,Ave= %f\n",k.sum,k.ave);
	printf("****************\n");
	sysbsort(a,UNUMBER);
	show(a,UNUMBER);
	writedate(a,UNUMBER,"sortdata.txt");
	printf("****************\n");
	printf("****************\n");
	printf("currentfile's path is:");
	Showpath("sortdata.txt");
	Showpath("rowdata.txt");
	return 0;
}
