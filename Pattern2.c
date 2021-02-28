#include<stdio.h>
#include<conio.h>
void main(){
int i,j,p;
for(i=71;i>=65;i--)
{
	for(j=65;j<=i;j++)
	printf("%c",j);
	for(p=71;p>j-1;p--)
	printf(" ");
	for(p=i;p<70;p++)
	printf(" ");
	for(j=j-1;j>=65;j--)
	{
		if(j==71)
		{
			j=70;
			printf("%c",j);
		}
		else
		printf("%c",j);
	}
	printf("\n");
	}	
	
}
