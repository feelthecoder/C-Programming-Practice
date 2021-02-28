/* PROBLEM :: Given an array of integers , return a new array such that each element 
at index i of the new arrai is the product of all the numbers in the original array except the one at i. */

#include<stdio.h>
int  *multiplied_array_except_i(int [],int n);
void main(){
	int arr[500],i,n,*new_array;
	printf("Enter the number of elements in array:");
	scanf("%d",&n);
	printf("\nEnter the elements of array :");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	new_array=multiplied_array_except_i(arr,n);
	for(i=0;i<n;i++)
	printf("%d  ",new_array[i]);
	
}
int *multiplied_array_except_i(int arr[],int n){
	int a[500],i,j;
	for(i=0;i<n;i++){
		a[i]=1;
		for(j=0;j<n;j++){
			if(j==i)
			continue;
			else
			a[i]*=arr[j];
		}
	}
	return a;
}
