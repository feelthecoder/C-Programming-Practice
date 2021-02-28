#include<stdio.h>
#include<stdlib.h>
int main()
{
	int c,ch;
	FILE *p,*q;
	p=fopen("file1.txt","r");
    q=fopen("file2.txt","w");
	while((c=fgetc(p))!=EOF)
		fputc(c,q);
	fclose(p);
	fclose(q);
}
