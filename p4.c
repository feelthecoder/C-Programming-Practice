#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int y,d1=0,d2=0,x,i,j,a[50][50];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			d1+=a[i][j];
			if(i+j==n-1)
			d2+=a[i][j];
		}
	}
x=d1-d2;
y=abs(x);
printf("\n%d",y);
	}
