#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<process.h>
#include"areaPeri.h"
#include"trigonometric.h"
main()
{     
      system("color 4E");
      float a,b,c;
      int i,d,n,dummy;
	  char ch;
      do{
      printf("+++++++++++++++++++++++++++++++++++++++");
      printf("         !!! CALCULATOR !!!\n");
      printf("+++++++++++++++++++++++++++++++++++++++");
	  printf("\nenter no. what you want\n");
      printf("1.add\n");																
      printf("2.subtraction\n");
      printf("3.multiply\n");
      printf("4.divide\n");
      printf("5.squareroot\n");
      printf("6.square\n");
      printf("7.Area and Circumference of Circle\n");
      printf("8.Area and Perimeter of Square\n");
      printf("9.Area and Perimeter of Rectangle\n");
      printf("10.Trigonometric Values\n");
      printf("11.exit\n");
      scanf("%d",&n);
switch(n)
   {
   case 1:printf("\nenter 1st and 2nd no.\n");
	  scanf("%f%f",&a,&b);
	  c=a+b;
	  printf("the addition is %.2f.\n",c);break;
   case 2:printf("\nenter 1st and 2nd no.\n");
	  scanf("%f%f",&a,&b);
	  c=a-b;
	  printf("\nthe subtraction is %.2f.\n",c);break;
  case 3: printf("\nenter 1st and 2nd no.\n");
	  scanf("%f%f",&a,&b);
	  c=a*b;
	  printf("the multiplication is %.2f\n",c);break;
  case 4: printf("\nenter 1st and 2nd no.\n");
	  scanf("%f%f",&a,&b);
	  c=a/b;
	  printf("the quotient is %.2f \n",c,d);break;
  case 5: printf("enter  no.\n");
	  scanf("%f",&a);
	  c=sqrt(a);
	  printf("the root is  %.2f.\n",c);break;
  case 6: printf("\nenter no.");
	  scanf("%f",&a);
	  c=a*a;
	  printf("\nthe square  is %.2f.\n",c); break;
  case 7: 	float r;
	    printf("Enter the radius of circle :");
	    scanf("%f",&r);
      	printf("\nArea of circle= %f\n ",areaCircle(r));
    	printf("Circumference of circle = %f",cirCircle(r));break;	  
  case 8:int a;
        printf("\nEnter length of side of square :");
	    scanf("%d",&a);
	    printf("Area of square = %d\n",areaSquare(a));
	    printf("Perimeter of square = %d\n",periSquare(a)); break;
  case 9:int p,q;
       	printf("\nEnter length and width of rectangle :");
     	scanf("%d%d",&p,&q);
	    printf("\nArea of Rectangle = %d\n",areaRectangle(p,q));
    	printf("Perimeter of Rectangle = %d\n",periRectangle(p,q)); break;
  case 10:float x;
        printf("\nenter angle  : ");
		scanf("%f",&x);
		printf(" \nsin(%f)  = %f \n",x,sine(x));	
		printf(" \ncos(%f)  = %f \n",x,cosine(x));
		printf(" \ntan(%f)  = %f \n",x,tangent(x)); break;	
  case 11: exit(0);
  default: printf("\n wrong input\n");break;
  }
  printf("\ndo you want to enter more?\n y/Y for yes \n any key for no\n");   
    scanf("%d",&dummy);  
    scanf("%c",&ch);  
    system("cls");
  }while(ch=='y'||ch=='Y');
 return 0;
}

