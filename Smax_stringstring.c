//feel_the_coder
#include<stdio.h>
void main()
{
	int a[10];
	int max,smax,i;
	printf("Enter Array:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	max=a[0];
	smax=a[1];
	for(i=0;i<10;i++)
	{
		if(max<a[i])
		{
		smax=max;
		max=a[i];
	}
		else
		if(smax<a[i]<max)
		smax=a[i];
	}
	printf("Second Maximum element : %d",smax);
	
}
