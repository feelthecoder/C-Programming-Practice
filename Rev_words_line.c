#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char c[50];
	char temp[50]={" "};
	int l;
	printf("Enter the line :");
	scanf("%[^\t\n]s",&c);
	l=strlen(c);
	int i=0;
	for(i=l-1;i>=0;i--)
	{
		if(c[i]==' ')
		{
			c[i]='\0';
			strcat(temp,&(c[i])+1);
			strcat(temp," ");
		}
	}
	strcat(temp,c);
	strcpy(c,temp);
	printf("Reversed words of line:%s",c);
}

