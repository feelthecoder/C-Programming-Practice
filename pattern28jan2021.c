#include <stdio.h>

int main()
{
    int i, j, n,count=1,counter;
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
			if(i==1&&j==1||i==j){
				printf("%d",count++);
			}
			else{
				printf("%d*",count++);		
			}
			if(i==n&&j==1)
			   counter=count-1;	
        }  
        printf("\n");
    }
    for(i=n; i>=1; i--)
    {
    	int con=i-1;
        for(j=i; j>=1; j--)
        {
			if(j==1)
			 printf("%d",counter++);
			else
			 printf("%d*",counter++);
        } 
		counter = counter - i - (con++); 
        printf("\n");
    }
    
    return 0;
}
