#include<stdio.h>
void main()
{
	int a[10];
	int max,i;
	printf("Enter Array:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	max=a[0];
	for(i=0;i<10;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	printf("Maximum element : %d",max);
	
}
