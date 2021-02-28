<<<<<<< HEAD
#include<stdio.h>
#include<string.h>
char *master_yoda(char *line,int l);
int main(void)
{
	char c[100];
	int l;
	printf("Enter the string:");
	scanf("%[^\t\n]s",&c);
	l=strlen(c);
printf("%s",master_yoda(c,l));
	return 0;
}
char *master_yoda(char *line,int l)
{
   char	temp[100]={""};
	int i=0;
	for(i=l-1;i>=0;i--)
	{
		if(line[i]==' ')
		{
			line[i]='\0';
			strcat(temp,&(line[i])+1);
			strcat(temp," ");
		}
	}
	strcat(temp,line);
	strcpy(line,temp);
}
=======
#include<stdio.h>
#include<string.h>
char *master_yoda(char *line,int l);
int main(void)
{
	char c[100];
	int l;
	printf("Enter the string:");
	scanf("%[^\t\n]s",&c);
	l=strlen(c);
printf("%s",master_yoda(c,l));
	return 0;
}
char *master_yoda(char *line,int l)
{
   char	temp[100]={""};
	int i=0;
	for(i=l-1;i>=0;i--)
	{
		if(line[i]==' ')
		{
			line[i]='\0';
			strcat(temp,&(line[i])+1);
			strcat(temp," ");
		}
	}
	strcat(temp,line);
	strcpy(line,temp);
}
>>>>>>> 7537aa5dfc01cd97daee4a55ce8a6e0b53291270
