#include<stdio.h>
int ldigit(char ch);
void main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	printf("\n%d",ldigit(ch));
	
	}
	int ldigit(char ch)
	{
		if(ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'||ch=='0')
		return 1;
		return 0;
	}
