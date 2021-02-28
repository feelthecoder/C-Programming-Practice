#include<stdio.h>
#include<string.h>
char *isit_binary(char *srt);
char t[5]="TRUE",f[5]="FALSE";
int main(void)
{
	char str[30];
	printf("Enter the string:");
	gets(str);
	printf("%s",isit_binary(str));
	return 0;
}
//defintion of isit_binary()
char *isit_binary(char *str)
{
	int l=0,len=strlen(str);
	while (*str)
	{
		if(*str=='0'||*str=='1')
		{
		str++;
		l++;		
	}
		else
		break;
	}
	if(l==len)
	return t;
	else
	return f;
	
}
