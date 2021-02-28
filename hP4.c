#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main(void){
	char num[100];
	int nu[9]={0},i=0;
	int len;
	gets(num);
	len=strlen(num);
	for(i=0;i<len;i++)
	{
		if(num[i]=='1')
		nu[0]++;
			if(num[i]=='2')
		nu[2]++;
			if(num[i]=='3')
		nu[3]++;
			if(num[i]=='4')
		nu[4]++;
			if(num[i]=='5')
		nu[5]++;
			if(num[i]=='6')
		nu[6]++;
			if(num[i]=='7')
		nu[7]++;
			if(num[i]=='8')
		nu[8]++;
			if(num[i]=='9')
		nu[9]++;
			
	}
	for(i=0;i<9;i++)
	printf("%d ",nu[i]);
}
