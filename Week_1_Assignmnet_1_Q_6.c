#include<stdio.h>
char *vocon(char ch);
void main()
{
	char ch;
	printf("Enter a alphabet:");
	scanf("%c",&ch);
	printf("%s",vocon(ch));
}
char *vocon(char ch)
{
	char *c="Vowel";
	char *a="Consonant";
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	return c;
	else
	return a;
}
