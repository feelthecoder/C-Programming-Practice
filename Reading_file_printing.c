#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c;
	FILE *p;
	p=fopen("file1.txt","r");
	while((c=fgetc(p))!=EOF)
	{
		printf("%c",c);
	}
fclose(p);
}

