#include<stdio.h>
void main()
{
	int a[10];
	int min,smin,i;
	printf("Enter Array:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	min=a[0];
	smin=a[1];
	for(i=0;i<10;i++)
	{
		if(min>a[i])
		{
		smin=min;
		min=a[i];
	}
		else
		if(smin>a[i]>min)
		smin=a[i];
	}
	printf("Second Minimum element : %d",smin);
	
}
