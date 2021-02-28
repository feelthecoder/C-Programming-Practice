#include<stdio.h>
#include<conio.h>
void triplets(int a[],int b[]);
void main()
{
	int a[3],b[3];
	int i,c1=0,c2=0;
	for(i=0;i<3;i++)
	{
	scanf("%d",&a[i]);
}
	for(i=0;i<3;i++)
	{
	scanf("%d",&b[i]);
}

	for(i=0;i<3;i++)
	{
		if(a[i]>b[i])
		c1++;
		else if(a[i]<b[i])
		c2++;
	}
	printf("\n%d\t%d",c1,c2);
}
