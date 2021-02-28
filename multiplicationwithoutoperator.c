#include<stdio.h>
void main()
{
	int i,a,b,sum=0;
	printf("Enter numbers to be multiplied:");
	scanf("\n%d%d",&a,&b);
	for(i=1;i<=b;i++)
	sum+=a;
	printf("%d*%d=%d",a,b,sum);
}
