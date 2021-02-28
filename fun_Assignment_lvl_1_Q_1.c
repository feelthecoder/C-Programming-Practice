<<<<<<< HEAD
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

=======
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

>>>>>>> 7537aa5dfc01cd97daee4a55ce8a6e0b53291270
