/* PROBLEM :: Given a list of numbers and a number k, return whether any two numbers from list adds up to k.*/

#include<stdio.h>
int check_pair_sum_to_k(int[],int,int);
void main(){
	int arr[100],n,k,i;
	printf("Enter total Numbers in array:");
	scanf("%d",&n);
	printf("\nEnter the elements of array:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the Check Element :");
	scanf("%d",&k);
	printf("%d",check_pair_sum_to_k(arr,n,k));
	
}
int check_pair_sum_to_k(int arr[],int n,int k){
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]+arr[j]==k)
			return 1;
		}
	}
	return 0;
}
