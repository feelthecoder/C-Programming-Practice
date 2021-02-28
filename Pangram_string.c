#include<stdio.H>
#include<string.h>
int pangram(char *s);
int main(void)
{
	char s[100];
	printf("Enter the string:");
	gets(s);
	if(pangram(s))
	printf("It is Pangram");
	else
	printf("It is not pangram");
	return 0;
	
}
int pangram(char *s)
{
	int c,count=0,i=0;
	char t[27]={0},x;
	for(i=0;i<strlen(s);i++)
	{
		t[26]=s[i];
		if(t[26]>=65&&t[26]<=90)
		{
		   c=(t[26]-64)-1;
		   if(t[c]==0)	
		   {
		   	t[c]=1;
		   	++count;
		   }
		}
		else
			if(t[26]>=97&&t[26]<=122)
		{
		   c=(t[26]-96)-1;
		   if(t[c]==0)	
		   {
		   	t[c]=1;
		   	++count;
		   }
		}
	}
	if(count==26)
	return 1;
	else return 0;
}
