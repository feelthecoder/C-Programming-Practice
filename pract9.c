#include<stdio.h>
typedef struct{
	int bit1:1;
	int bit2:2;
	int bit30:30;
} bits;
int main()
{
	printf("%d",sizeof(bits));
	printf("%d",sizeof(int));
		return 0;
}
