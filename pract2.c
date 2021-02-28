#include<stdio.h>
void main()
{
	int n1,n2;
	char str1[]="sololearn";
	char str2[]={'s','o','l','o','q','u','i','z'};
n1=sizeof(str1)/sizeof(str1[0]);
	 n2=sizeof(str2)/sizeof(str2[0]);
	printf("%d%d",n1,n2);
}
