#include<stdio.h>
void main()
{
	int i,sum=0,n,a=1;
	printf("Enter the number of terms in seroes 1+2+4+7+11....\n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=a;
		a=a+i;
	}
	printf("%d",sum);
}
