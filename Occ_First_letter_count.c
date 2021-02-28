#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[30];
	int count=0,i=1,len;
	printf("Enter String:");
	gets(str);
	len=strlen(str);
	for(i=1;i<=len;i++)
	{
	if(str[0]==str[i])
		{
			count++;
			str[i]='$';
		}
	}
	printf("\nNumber of Ocuurence:%d",count+1);
	printf("\nString After Manipulation : ");
	puts(str);
}
