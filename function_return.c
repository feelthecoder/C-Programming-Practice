#include<stdio.h>

int add(int,int);

void main(){
	printf("%d",add(4,9));
}

int add(int x,int y){
	int c;
	c=x+y;
	return c;
}
