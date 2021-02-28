#include<stdio.h>
int cmp_odd_even_ret(int a,int b);
int main(void)
{
	int a,b,return_value;
	printf("Enter any two numbers:\n");
	scanf("%d%d",&a,&b);
	return_value=cmp_odd_even_ret(a,b);
	printf("%d",return_value);
}
//definition of cmp_odd_even_ret()
int cmp_odd_even_ret(int a,int b)
{
	if(a%2==0&&b%2==0)
	{
		if(a>b)
		return b;
		else
		return a;
	}
	else
	{
			if(a>b)
		return a;
		else
		return b;
	}
}

