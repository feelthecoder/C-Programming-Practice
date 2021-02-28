#include<stdio.h>
void findCart(int arr1[],int arr2[],int n,int n1)
{
	int i,j;
	for(i=0;i<n;i++)
     for(j=0;j<n1;j++)
     printf("{%d,%d},",arr1[i],arr2[j]);
}
int main()
{
	int arr1[20],arr2[20],n1,n2;
	int i;
	printf("Enter no. of elements of first set:");
	scanf("%d",&n1);
	printf("\nEnter the elements of set 1:");
	for(i=0;i<n1;i++)
	scanf("%d",&arr1[i]);
    printf("\nEnter no. of elements of second set:");
	scanf("%d",&n2);
	printf("\nEnter the elements of set 2:");
	for(i=0;i<n1;i++)
	scanf("%d",&arr2[i]);
	printf("\nCartesian Product : ");
	findCart(arr1,arr2,n1,n2);
	printf("\n\nVIKAS KUMAR");
	return 0;
}
