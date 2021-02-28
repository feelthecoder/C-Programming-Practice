#include<stdio.h>
void main()
{
	int x,y,count=0;
	scanf("%d%d",&x,&y);
	while(1)
	{
		x=x-y;
		count++;
		if(x<y||x==0)
		break;
	}
	printf("Quotient:%d",count);
}
