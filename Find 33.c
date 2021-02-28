#include<stdio.h>
int has_33(int arr[],int n);
int main(void)
{
	int i,n,aa[50];
	printf("Enter the number of array elements");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&aa[i]);
	printf("Result=%d",has_33(aa,n));
	return 0;
}
int has_33(int a[],int n)
{
	int i,j=3;
	for(i=0;i<n;i++)
	{
	if(a[i]==3)
		if(a[i]==a[i+1])
		return 1;
		else 
		return 0;
	}
}
