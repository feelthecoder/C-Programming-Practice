<<<<<<< HEAD
#include<stdio.h>
char *Animal_Cracker(char []);
char t[5]="TRUE",f[5]="FALSE";
int main(void)
{
	char sr[50];
	printf("Enter the two word string:\n");
	gets(sr);
	printf("%s",Animal_Cracker(sr));
	return 0;
}
//definition of Animal_Craccker()
char *Animal_Cracker(char str[])
{
	int i=0,c;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			c=i;
			break;
		}
		i++;
	}
	if(str[0]==str[c+1])
	return t;
	else
	return f;
}
=======
#include<stdio.h>
char *Animal_Cracker(char []);
char t[5]="TRUE",f[5]="FALSE";
int main(void)
{
	char sr[50];
	printf("Enter the two word string:\n");
	gets(sr);
	printf("%s",Animal_Cracker(sr));
	return 0;
}
//definition of Animal_Craccker()
char *Animal_Cracker(char str[])
{
	int i=0,c;
	while(str[i]!='\0')
	{
		if(str[i]==' ')
		{
			c=i;
			break;
		}
		i++;
	}
	if(str[0]==str[c+1])
	return t;
	else
	return f;
}
>>>>>>> 7537aa5dfc01cd97daee4a55ce8a6e0b53291270
