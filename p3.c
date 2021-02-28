#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	long int sum=0;
	long int a[1000];
	int i;
	for(i=0;i<n;i++)
	{
	scanf("%ld\t",&a[i]);
}
for(i=0;i<n;i++)
{
	sum=sum+a[i];
}
printf("%ld",sum);
}
