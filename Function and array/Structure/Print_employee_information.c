#include<stdio.h>
struct employee
{
	int empno;
	char empname[20] , address[30];
	int age;
};
int main()
{
	struct employee student[5];
	int i;
	char temp;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t Enter the employee no :");
		scanf("%d",&student[i].empno);
		
		printf("\n\n\t Enter the employee name :");
		scanf("%s",&student[i].empname);
		
		printf("\n\n\t Enter the employee address :");
        scanf("%c", &temp); // Read the newline character again
        gets(student[i].address);//gets function is used to read a string and store the input in well-defined string variable.
		
		printf("\n\n\t Enter the age :");
		scanf("%d",&student[i].age);
		
		printf("\n\n\t ------- Next name : ---------");
	}
	
	printf("\n\n\t --------------Final Result ----------------\n\n");
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t employee no : %d",student[i].empno);
		printf("\n\n\t employee name : %s",student[i].empname);
		printf("\n\n\t employee address : %s",student[i].address);
		printf("\n\n\t employee age : %d",student[i].age);
	}
}