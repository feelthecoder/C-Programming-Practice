#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int sloveit(int,int);
int main()
{
	char a[4];
	int i,j,t,r,c,count;
	printf("Enter the number of cases:");
	scanf("%d",&t);
	if(t>=1&&t<=pow(10,6))
	{
		for(i=0,j=0;i<t,j<t;i++,j++)
		{
			scanf("%d\t\t\t%d",&r,&c);
			a[j]=solveit(r,c);
		}
	}
	else
	{
		printf("Cant Proceed!!!");
	}
	for(j=0;j<t;j++)
	{
		if(a[j]==0)
		printf("EVEN\n");
		else
		printf("ODD\n");
	}
}
int solveit(int r,int c)
{
	int a=0,b=1;
	int y[100];
	int i,d;
	if(r<1||c>pow(10,18||r>c))
	{
		printf("Cant proceed due to the the limit issue!!!aborting!!!!");
	}
	else
	{
		d=r^(++r);
		while(r<c)
		{
			if(r==c)
		{
			d=c;
			break;
				}
			++r;
			d=r^d;
		}
				
	}
	if(d%2==0)
	return b;
	else
	return a;
}                               
