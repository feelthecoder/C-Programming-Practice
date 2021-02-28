#include<stdio.h>
#include<conio.h>
int value(int a,int b)
{
	int x;
	x=a^b;
	return x;
}
int main()
{
	int a,b,f;
	scanf("%d%d",&a,&b);
	f=value(a,b);
	printf("%d",f);
}
