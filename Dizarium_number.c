#include<stdio.h>
void main()
{
	int n,an,r,rev=0,ver=0,product;
	printf("Enter a number to be checked:\n");
	scanf("%d",&n);
	an=n;
	while(n!=0)
	{
		r=n%10;
		ver+=r;
		n/=10;
	}
	n=ver;
	while(ver!=0)
	{
		r=ver%10;
		rev=rev*10+r;
		ver/=10;
	}
	product=n*rev;
	if(product==an)
	printf("Dizarium");
	else
	printf("Not Dizarium");
}
