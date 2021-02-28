#include<stdio.h>
void main()
{
	int a[10];
	int min,i;
	printf("Enter Array:");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	printf("Minimum element : %d",min);
	
}
