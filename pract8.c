#include<string.h>
#include<stdio.h>
void main()
{
	char str,x='A',X='a';
	int i=0,hash[50]={0};
	while(scanf("%c",&str)==0)
	{
		if(str==x++||str==X++||str==' ')
		hash[i]=str;
		else
		break;
	}
	printf("%s",hash);
}
