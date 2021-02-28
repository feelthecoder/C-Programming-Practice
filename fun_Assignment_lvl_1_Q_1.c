#include<stdio.h>
void mac_donald(char *x);
int main()
{
	char x[50];
	printf("Enter the string:");
	scanf("%s",x);
	mac_donald(x);
    printf("%s",x);
	
}
void mac_donald(char *x)
{
		int i=0;
 while(x[i]!='\0')
 {
 	if(i==0||i==3)
 	x[i]=x[i]+'A'-'a';
 	
i++;
 }
}

