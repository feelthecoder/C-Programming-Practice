<<<<<<< HEAD
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char A[15]="Anagrams",a[15]="Not Anagrams";
char *sort_string(char*);
char *anagrams(char *str1,char *str2);
int main(void)
{
	char s1[30],s2[30];
	printf("Enter the string to be checked:\n");
	gets(s1);
	gets(s2);
	strcpy(s1,sort_string(s1));
	strcpy(s2,sort_string(s2));
	printf("\n%s",anagrams(s1,s2));
	return 0;
}
//definition of anagrams()
char *anagrams(char *str1,char *str2)
{
	if(strcmpi(str1,str2)==0)
	return A;
	else
	return a;
}
char *sort_string(char *x)
{
	int i,j=0,length;
	char *p,*resu,ch,cp;
	length=strlen(x);
	resu=(char*)malloc(length+1);
	p=x;
	for(ch='a',cp='A';ch<='z'||cp<='Z';ch++,cp++)
	{
		for(i=0;i<length;i++)
		{
			if(*p==ch||*p==cp)
			{
				*(resu+j)=*p;
				j++;
			}
			p++;
		}
		p=x;
	}
	*(resu+j)='\0';
	strcpy(x,resu);
	free(resu);
	return x;
}
=======
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char A[15]="Anagrams",a[15]="Not Anagrams";
char *sort_string(char*);
char *anagrams(char *str1,char *str2);
int main(void)
{
	char s1[30],s2[30];
	printf("Enter the string to be checked:\n");
	gets(s1);
	gets(s2);
	strcpy(s1,sort_string(s1));
	strcpy(s2,sort_string(s2));
	printf("\n%s",anagrams(s1,s2));
	return 0;
}
//definition of anagrams()
char *anagrams(char *str1,char *str2)
{
	if(strcmpi(str1,str2)==0)
	return A;
	else
	return a;
}
char *sort_string(char *x)
{
	int i,j=0,length;
	char *p,*resu,ch,cp;
	length=strlen(x);
	resu=(char*)malloc(length+1);
	p=x;
	for(ch='a',cp='A';ch<='z'||cp<='Z';ch++,cp++)
	{
		for(i=0;i<length;i++)
		{
			if(*p==ch||*p==cp)
			{
				*(resu+j)=*p;
				j++;
			}
			p++;
		}
		p=x;
	}
	*(resu+j)='\0';
	strcpy(x,resu);
	free(resu);
	return x;
}
>>>>>>> 7537aa5dfc01cd97daee4a55ce8a6e0b53291270
