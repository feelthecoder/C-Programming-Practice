//Print this pattern...
#include<stdio.h>
void main()
{
int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<7;j++)
		{
			if(i==j)
			printf(" ");
			else
			printf("*");
		}
		printf("\n");
	}
}
