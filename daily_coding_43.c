#include<stdio.h>
void push(int[],int,int);
int pop(int[],int);
int max(int[],int);
void dis(int[],int);
int tmp=0,j;
int main(void){
	
	int maxo;
	int a[1000]={0},top=-1;
	int i,ele;
	C:
	printf("1.Push\n2.Pop\n3.Max Element\n4.Display\n");
	printf("Enter your choice : ");
	scanf("%d",&i);
	switch(i){
		case 1:
			printf("\nEnter element to be pushed :");
			scanf("%d",&ele);
			push(a,top,ele);
			 printf("\nDONE!!\n");
			 goto C;
			break;
		case 2: 
		    if(pop(a,top))
		    printf("\nDeleted!!\n");
		    goto C;
		    break;
		case 3:
			if(maxo=max(a,top))	
			printf("\nMaximum element :%d\n",maxo);
			else
			printf("\nEmpty!!\n");
			goto C;
			break;
		case 4: dis(a,top);
		break;
		default:printf("\nNo such choice!!\n");	    
			
	}
}

void push(int a[],int top,int ele){

		a[++top]=ele;
		printf("%d",a[top]);
	
}
int pop(int a[],int top){
	if(top==-1){
	printf("Stack Underflow!\n");
	return 0;
}
	else
	top--;
	return a[top];
}

int max(int a[],int top){
	if(top==-1){
		printf("Stack Underflow!\n");
		return 0;
	}
	else
	{
		tmp=a[top];
		for(j=top;j>0;j--){
			if(tmp<a[j]){
				tmp=a[j];
		
			}
		
			
			
		}
		return tmp;
		}
		
}
void dis(int a[],int top){
	if(top==-1)
	printf("Underflow!!\n");
	else
	{
		for(j=top;j>0;j--)
		printf("%d",a[top]);
	}
}

