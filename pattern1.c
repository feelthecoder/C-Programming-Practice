#include<stdio.h> 
#include<string.h>
#include<math.h>
#include<stdlib.h>
void main() 
{
int num,i,j,k,l;  
scanf("%d", &num);
l= num*2 - 1;
for(i=0;i<l;i++)
{  
for(j=0;j<l;j++)
{    
k=i<j?i:j;
k=k<l-i?k:l-i-1; 
k=k<l-j-1?k:l-j-1; 
printf("%d",num-k); 
}
printf("\n");
}  
}

