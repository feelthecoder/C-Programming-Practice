<<<<<<< HEAD
#include<stdio.h>
int almost_there(int x);
int main()
{
	int c;
	printf("Enter the number :");
	scanf("%d",&c);
	printf("%d",almost_there(c));
	return 0;
}
int almost_there(int x)
{
	if(x>=90&&x<=110||x>=190&&x<=210)
	return 1;
	else
	return 0;
}
=======
#include<stdio.h>
int almost_there(int x);
int main()
{
	int c;
	printf("Enter the number :");
	scanf("%d",&c);
	printf("%d",almost_there(c));
	return 0;
}
int almost_there(int x)
{
	if(x>=90&&x<=110||x>=190&&x<=210)
	return 1;
	else
	return 0;
}
>>>>>>> 7537aa5dfc01cd97daee4a55ce8a6e0b53291270
