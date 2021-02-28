#include<stdio.h>
int main()
{
	int a=10;
	a=a++;
	a=a++ * a--;
	printf("%d\n",a);
	printf("%d\n",a++ * a++);
	return 0
;
}
