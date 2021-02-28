<<<<<<< HEAD
//Program to reverse string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void string_rev(char a[]);
void main()
{
	char a[50];
	printf("Enetr the string:");
	gets(a);
	string_rev(a);
}
void string_rev(char c[50])
{
	char p[50]={" "};
	int i=0,j=0,len=0;
	len=strlen(c);
	for(i=len-1;i>=0;i--)
	{
p[j++]=c[i];		
	}
	printf("String Reversed:%s",p);
}
=======
//Program to reverse string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void string_rev(char a[]);
void main()
{
	char a[50];
	printf("Enetr the string:");
	gets(a);
	string_rev(a);
}
void string_rev(char c[50])
{
	char p[50]={" "};
	int i=0,j=0,len=0;
	len=strlen(c);
	for(i=len-1;i>=0;i--)
	{
p[j++]=c[i];		
	}
	printf("String Reversed:%s",p);
}
>>>>>>> 7537aa5dfc01cd97daee4a55ce8a6e0b53291270
