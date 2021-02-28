<<<<<<< HEAD
#include<stdio.h>
char *Makes_Twenty(int,int);
char t[5]="TRUE",f[5]="FALSE";
int main(void)
{
	int num1,num2;
	printf("Enter the two numbers:");
	scanf("%d\t%d",&num1,&num2);
	printf("%s",Makes_Twenty(num1,num2));
	return 0;
}
//definition of Makes_Twenty(int,int)
char *Makes_Twenty(int a,int b)
{
	int result;
	result=a+b;
	if(result==20||a==20||b==20)
	return t;
	else 
	return f;
}
=======
#include<stdio.h>
char *Makes_Twenty(int,int);
char t[5]="TRUE",f[5]="FALSE";
int main(void)
{
	int num1,num2;
	printf("Enter the two numbers:");
	scanf("%d\t%d",&num1,&num2);
	printf("%s",Makes_Twenty(num1,num2));
	return 0;
}
//definition of Makes_Twenty(int,int)
char *Makes_Twenty(int a,int b)
{
	int result;
	result=a+b;
	if(result==20||a==20||b==20)
	return t;
	else 
	return f;
}
>>>>>>> 7537aa5dfc01cd97daee4a55ce8a6e0b53291270
