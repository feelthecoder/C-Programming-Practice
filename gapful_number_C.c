#include<stdio.h>
int gapful(int number);
int main(void)
{
	int num_,return_val;
    printf("Enter the number you want to check??\n");
	scanf("%d",&num_);
	return_val=gapful(num_);//function calling to find gapful number
	if(return_val==0)
	printf("\nGiven number is not gapful\n");
	else
	printf("Given number is gapful\n");
	return 0;	
}

//definition of gapful()
int gapful(int number)
{
	int count=0,last_,first_,another_,new_formed;
	last_=number%10;
	another_=number;
	while(number!=0){
		first_=number%10;
		number=number/10;
		count++;
	}
	new_formed=first_*10+last_;
	if(count==3)
	{
	if(another_%new_formed==0)
	return 1;
	else 
	return 0;
}
else 
return 0;
}
