#include<stdio.h>
void main()
{
	int d,m,y,c1,c2;
	printf("Enter Your Date of Birth(DD/MM/YYYY) :");
	scanf("%d%*c%d%*c%d",&d,&m,&y);
	printf("Your Date of Birth :");
	printf("%d/%d/%d",d,m,y);
}
