#include<stdio.h>
#include<conio.h>
int list();
void deposite();
void last();
void transfer();
void withdraw();
void checkdetail();
int totalamount=1000,Amount,amo,tr,totaldeposite=0,totalwith=0,totaltr=0;
int acc;
char a[50];
void main()
{
    clrscr();
    printf("\nenter your name");
    gets(a);
    printf("\nenter your account no");
    scanf("%d",&acc);
    while(1)
    {
      clrscr();
      switch(list());
      {
         case 1:
             deposite();
             totaldeposite+=Amount;
             break; 
         case 2:
             withdraw();
             if(amo<=totalamount)
             totalwith+=Amo;
             break; 
         case 3:
             transfer();
             if(tr<=totalamount)
             totaltr+=tr;
             break;
         case 4:
             checkdetail();
             break;
         case 5:
             clrscr();
             last();
             getch();
             exit(0);
         default
             printf("\ninvalid choice");
      }
    getch();
    }
    list();
}

int list()
{
   int ch; 
   printf("\n1 deposite amount:");
   printf("\n2 withdraw amount:");
   printf("\n3 transfer amount:");
   printf("\n4 check details:");
   printf("\n5 exit:");
   printf("\nenter your choice:");
   scanf("%d",&ch);
   return (ch); 
}
void deposite()
{
    printf("\nenter the amount you want to deposite:");
    scanf("%d",&Amount);
    totalamount+=Amount;
}
void withdraw()
{
    printf("\nenter the amount that you want to withdraw:");
    scanf("%d",&amo);
    if(amo<=totalamount)
    totalamount-=amo; 
    else
    printf("\nless amount: withdraw is not possible ");
}
void transfer()
{
    printf("\nenter the amount you want to transfer:");
    scanf("%d",&tr);
    if(tr<=totalamount)
    totalamount-=tr;
    else
    printf("\nless amount: transfer not possible");
}
void checkdetail()
{
   printf("\ntotal amount %d",totalamount); 
   printf("\ntotal deposited amount:%d",totaldepostie);
   printf("\ntotal withdraw amount:%d"totalwith);
   printf("\ntotal transfer amount:%d"totaltr);

}
 void last()
{
   printf("******************************");
   printf("\nYour Name:%s",a);
   printf("\nAccount number:%d",acc);
   printf("\ntotal amount %d",totalamount); 
   printf("\ntotal deposited amount:%d",totaldepostie);
   printf("\ntotal withdraw amount:%d"totalwith);
   printf("\ntotal transfer amount:%d"totaltr);
   printf("\n \n***********THANK YOU*******");
}
