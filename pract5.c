#include<stdio.h>
void main()
{
	int *p=(int *)malloc(sizeof(int));
	*p=42;
	int *v=p;
	*v=41;
	printf("%d",*p);
}
