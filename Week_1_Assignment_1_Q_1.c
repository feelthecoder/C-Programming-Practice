<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#define PI 3.14
float circle(char []);
float rectangle(char []);
float square(char []);
float eq_triangle(char []);
float pentagon(char []);
float hexagon(char []);
float rhombus(char []);
float trapezoid(char []);
float nonagon(char []);
float decagon(char []);
void main()
{
	char choice[30];
	int ch;
	printf("        \t\t\tMAIN MENU     \n\n    ");
	printf("\t\t\t\t1.Circle\n\t\t\t\t2.Rectangle\n\t\t\t\t3.Square\n\t\t\t\t4.Equilateral Triangle\n\t\t\t\t5.Pentagon\n\t\t\t\t6.Hexagon\n\t\t\t\t7.Rhombus\n\t\t\t\t8.Trapezoid\n\t\t\t\t9.Nonagon\n\t\t\t\t10.Decagon\n\t\t\t\t11.Exit");
	printf("\t\t\t\n\n\t Enter your choice(1-11) :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: 
		printf("        \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.CIRCUMFERENCE\n");
		scanf("%s",choice);
    	printf("%f",rectangle(choice));
		break;
		case 3: 
		printf("       \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",square(choice));
		break;
		case 4: 
		printf("       \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",eq_triangle(choice));
		break;
		case 5: 
		printf("       \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",pentagon(choice));
		break;
		case 6: 
		printf("      \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",hexagon(choice));
		break;
		case 7: 
		printf("       \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",rhombus(choice));
		break;
		case 8: 
		printf("        \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",trapezoid(choice));
		break;
		case 9: 
		printf("      \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",nonagon(choice));
		break;
		case 10: 
		printf("      \t\t\n\nSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",decagon(choice));
		break;
		default:
			printf(" \t\t\t\tTHANK YOU \n\t\t\t\tBY VIKAS KUMAR\n\t\t\t\tCSE FIRST YEAR\n\t\t\t\tRAJKIYA ENGINEERING COLLEGE BIJNOR");
			exit(0);
	}
	
}
float circle(char str[])
{
	float area,circu;
	int r;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
		printf("Enter Radius:");
		scanf("%d",&r);
		area=PI*r*r;
		printf("\nAREA=");
		return area;
	}
	else
	{
	printf("Enter Radius:");
		scanf("%d",&r);
		circu=2*PI*r;
		printf("CIRCUMFERENCE=");
		return circu;
	}
}
float rectangle(char str[])
{
	float area,peri;
		int a,b;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
		printf("Enter Lenght , Breadth :");
		scanf("%d%d",&a,&b);
		printf("\nAREA=");
		area=a*b;
		return area;
	}
	else
	{
	printf("Enter Lenght , Breadth :");
		scanf("%d%d",&a,&b);
		peri=2*(a+b);
		printf("PERIMETER=");
		return peri;
	}
}
float square(char str[])
{
	float area,peri;
		int a;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	
		printf("Enter Side:");
		scanf("%d",&a);
		area=a*a;
		printf("\nAREA=");
		return area;
	}
	else
	{
	printf("Enter Side:");
		scanf("%d",&a);
		peri=4*a;
		printf("PERIMETER=");
		return peri;
	}
}
float eq_triangle(char str[])
{
	float area,peri;
	int side;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	    printf("Enter Side:");
		scanf("%d",&side);
		area=(sqrt(3)/2)*side*side;
		printf("\nAREA=");
		return area;
	}
	else
	{
	printf("Enter Side:");
		scanf("%d",&side);
		peri=3*side;
		printf("PERIMETER=");
		return peri;
	}
}
float pentagon(char str[])
{
float area,peri;
		int side,apothem;
		printf("Enter Side:");
		scanf("%d",&side);
		peri=5*side;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	printf("Enter Apothem :\n");
	scanf("%d",&apothem);
		area=1/2*peri*apothem;
		printf("\nAREA=");
		return area;
	}
	else
		{
	printf("PERIMETER=");
	return peri;
}
}
float hexagon(char str[])
{
	float area,peri;
		int side,apothem;
	
	printf("Enter Side:");
		scanf("%d",&side);
		peri=6*side;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	printf("Enter Apothem :\n");
	scanf("%d",&apothem);
		area=1/2*peri*apothem;
		printf("\nAREA=");
		return area;
	}
	else
		{
	printf("PERIMETER=");
	return peri;
}
}
float rhombus(char str[])
{
	float area,peri;
	int d1,d2,a;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
		printf("Enter the Diagonals:");
		scanf("%d%d",&d1,&d2);
		area=1/2*d1*d2;
		printf("\nAREA=");
		return area;
	}
	else
	{
		printf("Enter the side of rhombus:");
		scanf("%d",&a);
		peri=4*a;
		printf("PERIMETER=");
		return peri;
	}
}
	float trapezoid(char str[])
{
	float area,peri;
		int b1,b2,h;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	
		printf("Enter parallel Opposite sides:\n");
		scanf("%d%d",&b1,&b2);
		printf("Enter height:\n");
		scanf("%d",&h);
		area=b1+b2*2*h;
		printf("\nAREA=");
		return area;
	}
	else
	{
		int a1,a2;
		printf("Enter Opposite sides:\n");
		scanf("%d%d",&b1,&b2);
		printf("Enter anti-parallel opposite sides:\n");
		scanf("%d%d",&a1,&a2);
		peri=b1+b2+a1+a2;
		printf("PERIMETER=");
		return peri;
	}
}
	float nonagon(char str[])
{
float area,peri;
		int side,apothem;
	printf("Enter Apothem :\n");
	scanf("%d",&apothem);	
	printf("Enter Side:");
		scanf("%d",&side);
		peri=9*side;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	
		area=1/2*peri*apothem;
		printf("\nAREA=");
		return area;
	}
	else
		{
	printf("PERIMETER=");
	return peri;
}
}
		float decagon(char str[])
{
	float area,peri;
		int side,apothem;
	printf("Enter Apothem :\n");
	scanf("%d",&apothem);	
	printf("Enter Side:");
		scanf("%d",&side);
		peri=10*side;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	
		area=1/2*peri*apothem;
		printf("\nAREA=");
		return area;
	}
	else
	{
	printf("PERIMETER=");
	return peri;
}
}

=======
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#define PI 3.14
float circle(char []);
float rectangle(char []);
float square(char []);
float eq_triangle(char []);
float pentagon(char []);
float hexagon(char []);
float rhombus(char []);
float trapezoid(char []);
float nonagon(char []);
float decagon(char []);
void main()
{
	char choice[30];
	int ch;
	printf("        \t\t\tMAIN MENU     \n\n    ");
	printf("\t\t\t\t1.Circle\n\t\t\t\t2.Rectangle\n\t\t\t\t3.Square\n\t\t\t\t4.Equilateral Triangle\n\t\t\t\t5.Pentagon\n\t\t\t\t6.Hexagon\n\t\t\t\t7.Rhombus\n\t\t\t\t8.Trapezoid\n\t\t\t\t9.Nonagon\n\t\t\t\t10.Decagon\n\t\t\t\t11.Exit");
	printf("\t\t\t\n\n\t Enter your choice(1-11) :");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: 
		printf("        \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.CIRCUMFERENCE\n");
		scanf("%s",choice);
    	printf("%f",rectangle(choice));
		break;
		case 3: 
		printf("       \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",square(choice));
		break;
		case 4: 
		printf("       \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",eq_triangle(choice));
		break;
		case 5: 
		printf("       \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",pentagon(choice));
		break;
		case 6: 
		printf("      \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",hexagon(choice));
		break;
		case 7: 
		printf("       \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",rhombus(choice));
		break;
		case 8: 
		printf("        \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",trapezoid(choice));
		break;
		case 9: 
		printf("      \n\n\t\tSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",nonagon(choice));
		break;
		case 10: 
		printf("      \t\t\n\nSUB MENU \n  ");
		printf("    \t1.Area\n\t2.Perimeter\n");
		printf("\n What You Want To calculate ??");
		scanf("%s",choice);
		printf("%f",decagon(choice));
		break;
		default:
			printf(" \t\t\t\tTHANK YOU \n\t\t\t\tBY VIKAS KUMAR\n\t\t\t\tCSE FIRST YEAR\n\t\t\t\tRAJKIYA ENGINEERING COLLEGE BIJNOR");
			exit(0);
	}
	
}
float circle(char str[])
{
	float area,circu;
	int r;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
		printf("Enter Radius:");
		scanf("%d",&r);
		area=PI*r*r;
		printf("\nAREA=");
		return area;
	}
	else
	{
	printf("Enter Radius:");
		scanf("%d",&r);
		circu=2*PI*r;
		printf("CIRCUMFERENCE=");
		return circu;
	}
}
float rectangle(char str[])
{
	float area,peri;
		int a,b;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
		printf("Enter Lenght , Breadth :");
		scanf("%d%d",&a,&b);
		printf("\nAREA=");
		area=a*b;
		return area;
	}
	else
	{
	printf("Enter Lenght , Breadth :");
		scanf("%d%d",&a,&b);
		peri=2*(a+b);
		printf("PERIMETER=");
		return peri;
	}
}
float square(char str[])
{
	float area,peri;
		int a;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	
		printf("Enter Side:");
		scanf("%d",&a);
		area=a*a;
		printf("\nAREA=");
		return area;
	}
	else
	{
	printf("Enter Side:");
		scanf("%d",&a);
		peri=4*a;
		printf("PERIMETER=");
		return peri;
	}
}
float eq_triangle(char str[])
{
	float area,peri;
	int side;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	    printf("Enter Side:");
		scanf("%d",&side);
		area=(sqrt(3)/2)*side*side;
		printf("\nAREA=");
		return area;
	}
	else
	{
	printf("Enter Side:");
		scanf("%d",&side);
		peri=3*side;
		printf("PERIMETER=");
		return peri;
	}
}
float pentagon(char str[])
{
float area,peri;
		int side,apothem;
		printf("Enter Side:");
		scanf("%d",&side);
		peri=5*side;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	printf("Enter Apothem :\n");
	scanf("%d",&apothem);
		area=1/2*peri*apothem;
		printf("\nAREA=");
		return area;
	}
	else
		{
	printf("PERIMETER=");
	return peri;
}
}
float hexagon(char str[])
{
	float area,peri;
		int side,apothem;
	
	printf("Enter Side:");
		scanf("%d",&side);
		peri=6*side;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	printf("Enter Apothem :\n");
	scanf("%d",&apothem);
		area=1/2*peri*apothem;
		printf("\nAREA=");
		return area;
	}
	else
		{
	printf("PERIMETER=");
	return peri;
}
}
float rhombus(char str[])
{
	float area,peri;
	int d1,d2,a;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
		printf("Enter the Diagonals:");
		scanf("%d%d",&d1,&d2);
		area=1/2*d1*d2;
		printf("\nAREA=");
		return area;
	}
	else
	{
		printf("Enter the side of rhombus:");
		scanf("%d",&a);
		peri=4*a;
		printf("PERIMETER=");
		return peri;
	}
}
	float trapezoid(char str[])
{
	float area,peri;
		int b1,b2,h;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	
		printf("Enter parallel Opposite sides:\n");
		scanf("%d%d",&b1,&b2);
		printf("Enter height:\n");
		scanf("%d",&h);
		area=b1+b2*2*h;
		printf("\nAREA=");
		return area;
	}
	else
	{
		int a1,a2;
		printf("Enter Opposite sides:\n");
		scanf("%d%d",&b1,&b2);
		printf("Enter anti-parallel opposite sides:\n");
		scanf("%d%d",&a1,&a2);
		peri=b1+b2+a1+a2;
		printf("PERIMETER=");
		return peri;
	}
}
	float nonagon(char str[])
{
float area,peri;
		int side,apothem;
	printf("Enter Apothem :\n");
	scanf("%d",&apothem);	
	printf("Enter Side:");
		scanf("%d",&side);
		peri=9*side;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	
		area=1/2*peri*apothem;
		printf("\nAREA=");
		return area;
	}
	else
		{
	printf("PERIMETER=");
	return peri;
}
}
		float decagon(char str[])
{
	float area,peri;
		int side,apothem;
	printf("Enter Apothem :\n");
	scanf("%d",&apothem);	
	printf("Enter Side:");
		scanf("%d",&side);
		peri=10*side;
	if((strcmp(str,"Area")||strcmp(str,"area")||strcmp("AREA")||strcmp(str,"ARea")||strcmp(str,"arEA"))==0)
	{
	
		area=1/2*peri*apothem;
		printf("\nAREA=");
		return area;
	}
	else
	{
	printf("PERIMETER=");
	return peri;
}
}

>>>>>>> 7537aa5dfc01cd97daee4a55ce8a6e0b53291270
