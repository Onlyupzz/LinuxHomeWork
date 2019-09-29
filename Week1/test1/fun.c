#include "uhead.h"

void urand(int *a,int n)
{
	int i,j;
	srand((int)time(0));
	for(i=0;i<10;i++)
	{
		j=1+(int)(100.0*rand()/(RAND_MAX+1.0));
		a[i] = j;
	}
	
}

int usum(int *a,int n)
{
	int sum=0;
	int i;
	for(i=0;i<10;i++)
		sum=sum+a[i];
	return sum;	
}

void show(int *a,int n)
{
	int i;
	for(i=0;i<10;i++)
		printf("a[%d]=%d\n",i,a[i]);
}

/*
void input(int *a,int n)
{
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
}
int compar(const void *a,const void *b)
{
	int *aa=(int *)a,*bb=(int *)b;
	if(* aa>* bb) return 1;
	if(* aa == * bb) return 0;
	if(* aa < * bb) return -1;
}

void bsort(int *a,int n)
{
	int i,j,done,t;
	i=1;done=1;
	while(i<=10 && done)
	{
		done =0;
		for(j=0;j<10-i;j++)
		
			if(a[j+1]<a[j])
			{
				t=a[j];
				a[j] = a[j+1];
				a[j+1] =t;

				done=1;
			}
			i++;
		
	}
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
}
*/
