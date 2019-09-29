#include "uhead.h"

struct avg getAvg(int * a,int n)
{
	struct avg t;
	int i;
	int sum=0;
	float avger=0.0;
	for(i=0;i<n;i++)
	{
		sum = sum + a[i];
	}
	
	t.sum = sum;
	avger =((float) sum)/n;
	t.ave = avger;
	return t;
	
}

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

void sysbsort(int *a, int n)
{
	struct timeval tv1, tv2;

	gettimeofday(&tv1, NULL);
	bsort(a, n);
	gettimeofday(&tv2, NULL);
	printf("bsort spend %ld us:\n", tv2.tv_usec - tv1.tv_usec);
}

void sysqsort(int *a, int n)
{
	struct timeval tv1, tv2;
	gettimeofday(&tv1, NULL);
	qsort(a, n, sizeof(int), compar);
	gettimeofday(&tv2, NULL);
	printf("qsort spend %ld us:\n", tv2.tv_usec - tv1.tv_usec);
}

