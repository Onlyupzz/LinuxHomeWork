#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#define UNUMBER 100
#define N 10
struct avg{
	int sum;
	float ave;
};
void urand(int*,int);
int usum(int *,int);
void show(int *,int);

struct avg getAvg(int *,int);
void input(int *,int);
int compar(const void *a,const void *b);
void bsort(int *,int);
void sysbsort(int *, int);
void sysqsort(int *, int);
void writedate(int *,int,const char*);
void showarray(int *,int);
void Showpath(const char*);
