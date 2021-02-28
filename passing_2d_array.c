#include<stdio.h>
#include<conio.h>
void pass_array_2D(int arr[5][5]);
int main(void)
{
	int i,j,arr[5][5];
	printf("Enter the elements:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++){
		scanf("%d",&arr[i][j]);}
	}
 pass_array_2D(arr);
 	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		printf("%d  ",arr[i][j]);
	}
}
void pass_array_2D(int arr[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		arr[i][j]+=5;
	}
}
