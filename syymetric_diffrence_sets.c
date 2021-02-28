#include<stdio.h>
int main()
{
	int a[20],b[20],c[40],i,j,k,m,n;
	printf("Enter the size of set 1 and set 2");
	scanf("%d%d",&m,&n);
	printf("\nEnter set 1 elements :");
	for(i=0;i<m;i++)
	scanf("%d",&a[i]);
	printf("\nEnter set 2 elements :");
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	for(i=0,j=0,k=0;i<m&&j<n;)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else if(a[i]>b[j])
		{
			c[k]=b[j];
			j++;
			k++;
		}
		else
		{
		
			i++;
			j++;
		}
		}
	if(i<m)
		{
			for(;i<m;i++)
			{
				c[k]=a[i];
				k++;
			}
		}
		else if(j<n){
			for(;j<n;j++)
			{
				c[k]=b[j];
				k++;
			}
		}
		printf("\nSymmetric difference :");
		for(i=0;i<k;i++)
		printf("%d",c[i]);
		printf("\n\nVIKAS KUMAR");
		return 0;
}
