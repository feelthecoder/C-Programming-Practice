#include<stdio.h>
void main()
{
	int i=5,*p=&i;
	printf("%d\n%d\n%d",i,*p,p);
	i++;
	(*p)++;
	printf("\n%d\n%d\n%d",i,*p,p);
	
}
