#include<stdio.h>
int add(int,int);
int main()
{
	int x,y;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	add(x,y);
	return 0;
}
int add(int a,int b)
{
	int sum;
	sum=a+b;
	printf("%d",sum);
}
