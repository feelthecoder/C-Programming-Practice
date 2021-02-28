#include<stdio.h>
#include<math.h>
void main()
{
	int r,original,num,org,powered,sum=0,count=0;
	printf("Enter a number to be checked:\n");
	scanf("%d",&original);
	num=original;
	while(num!=0)
	{
		++count;
		num/=10;
	}
	num=original;
	while(num!=0)
	{
		r=num%10;
		powered=pow(r,count--);
		sum=sum+powered;
		num/=10;
	}
	
	if(sum==original)
	printf("Dizarium");
	else
	printf("Not Dizarium");
}
