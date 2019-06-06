#include<stdio.h>
#include<string.h>
void main()
{
	char ch[50];
	int i,size,c;
	printf("Enter the number:");
	scanf("%s",ch);
	size=strlen(ch);
	for(i=0;i<size;i++)
	{
		if(ch[i+1]=='0')
	c=0;
	else
		if(ch[0]=='0'||ch[i]!='0')
	c=1;

		
	}
	if(c==0)
	printf("\nThis is a duck number");
else
		printf("\nThis is not a duck number");
}
