#include<stdio.h>
void main()
{
	int i,j,k,p=1;
	for(i=4;i>0;i--)
	{
		for(j=1;j<i;j++)
		printf(" ");
		for(k=0;k<p;k++)
		printf("* ");
		printf("\n");
		p++;
	}
}
