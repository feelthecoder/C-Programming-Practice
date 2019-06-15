#include<stdio.h>
int gapful(int number);
int main(void)
{
	int num_;
        printf("Enter the number you want to check??\n");
	scanf("%d",&num_);
	//function calling to find gapful number
	if(gapful(num_)) 
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
	while(number){
		first_=number%10;
		number /=10;
		count++;
	}
	if(count>=3)
	{
           new_formed= first_*10 + last_;
	if(another_%new_formed==0)
	    return 1;
        }
return 0;
}
