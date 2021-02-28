#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
    int i,j,and[n*n],xor[n*n],or[n*n],p=0,large1,large2,large3,t1,t2,t3;
    if((n>=2&&n<=1000)&&(k>=2&&k<=n))
    {
    for(i=1;i<n;i++)
    {
       for(j=i+1;j<=n;j++)
       {
           
           and[p]=i&j;
        xor[p]=i^j;
        or[p]=i|j;
        p++;
       }
    }
     large1=and[0];
       large2=xor[0]; 
       large3=or[0];
   for(i=0;i<p;i++)
   {
     if(and[i]>large1&&and[i]<k)
     large1=and[i];
     if(xor[i]>large2&&xor[i]<k)
     large2=xor[i];
     if(or[i]>large3&&or[i]<k)
     large3=or[i];
   }
   
}
printf("%d\n%d\n%d",large1,large3,large2);
}



int main() {
    int n,k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 return 0;
}
