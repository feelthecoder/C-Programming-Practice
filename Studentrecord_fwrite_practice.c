#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct record
{
	int roll;
	int marks;
	char name[50];
}student;
void main()
{
	int i,n;
	FILE *dir;
	printf("Enetr the Number of Records of Stdent:");
	scanf("%d",&n);
	if((dir=fopen("studentrecords.dat","wb"))==NULL)
    {
    	printf("File can not be opened due to technical error...!!!!!!  Aborting1  !!!");
    	exit(1);
    }
    for(i=1;i<=n;i++)
    {
    	printf("\n RECORD NO : %d\n\n",i);
    	printf("\nEnter the roll number of student :  ");
    	scanf("%d",&student.roll);
    	printf("Enter name of student :  ");
    	scanf("%s",student.name);
    	printf("Enter marks of student :  ");
    	scanf("%d",&student.marks);
    	fwrite(&student,sizeof(student),1,dir);
	}
	printf("\n\n%d Records Stored Succesfully !!!! ",i-1);
	fclose(dir);
    
}
