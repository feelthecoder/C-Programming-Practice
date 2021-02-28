#include<stdio.h>
struct comp
{
	char name[20];
	long int salary;
	int emp_no;
	int bonus;
	int attendance;
	int annual_salary;
}emp[10];
void main()
{
	long int company_bonus_total=0,Sal;
	
	printf("Enter the information about each and every employee");
	int i,em;
	for(i=1;i<11;i++)
	{
		emp[i].salary=20000;
        emp[i].annual_salary=0;
		printf("\nEMPLOYEE NO :%d",i);
		emp[i].emp_no=i;
		printf("\n");
		printf("Enter the name of employee:");
		scanf("%s",emp[i].name);
		printf("Enter the attendance of month february and may in percentage:");
		scanf("%d",&emp[i].attendance);
	}
	for(i=1;i<11;i++)
	{
		
			printf("\n\n\nEMPLOYEE NO :%d",emp[i].emp_no);
		printf("\n");
		if(emp[i].attendance>95)
		{
		emp[i].bonus=0.4*emp[i].salary;
		emp[i].annual_salary=emp[i].bonus+(12*emp[i].salary);
	    }
	    else
	    if(emp[i].attendance>85)
		{
		emp[i].bonus=0.3*emp[i].salary;
		emp[i].annual_salary=emp[i].bonus+(12*emp[i].salary);
	    }
	    else
	    if(emp[i].attendance>75)
		{
		emp[i].bonus=0.2*emp[i].salary;
		emp[i].annual_salary=emp[i].bonus+(12*emp[i].salary);
	    }
	    else
	    if(emp[i].attendance>60)
		{
		emp[i].bonus=0.1*emp[i].salary;
		emp[i].annual_salary=emp[i].bonus+(12*emp[i].salary);
	    }
	    if(emp[i].attendance<40)
		{
		emp[i].bonus=0*emp[i].salary;
		emp[i].annual_salary=emp[i].bonus+(12*emp[i].salary);
	    }
	    else
	    if(emp[i].attendance<60&&emp[i].attendance>40)
		{
		emp[i].bonus=0.05*emp[i].salary;
		emp[i].annual_salary=emp[i].bonus+(12*emp[i].salary);
	    }
	    printf("Name: %s\n",emp[i].name);
				printf("Bonus Given:%d\n",emp[i].bonus);
	    printf("Annual Salary:%ld\n",emp[i].annual_salary);
	    company_bonus_total+=emp[i].bonus;
	       
		   Sal+=emp[i].annual_salary;
	}
	printf("\n\nTotal Bonus in one year:%ld\nTotal Annual salary provided:%ld\n",company_bonus_total,Sal);
}
	
