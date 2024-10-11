#include <stdio.h>
typedef struct 
{
	int rollno;
    char name[50];
    int marks[5];
    char grade;
    float percentage ;
}s;
int main()
{
    s students[3];
    int i , j , num_students;
    float total_marks;

    printf("\n\n\t Enter the number :");
    scanf("%d",&num_students);
    
    for (i = 0; i < num_students; i++) 
	{
		printf("\n\n\t Enter the roll no %d :",i + 1);
		scanf("%d",&students[i].rollno);
		
        printf("\n\n\t Enter the name of student %d : ", i + 1);
        scanf("%s",&students[i].name);

        printf("\n\n\t Enter the marks of student %d in 3 subjects: ", j + 1);
        for (j = 0; j < 5; j++) 
		{
            scanf("%d", &students[i].marks[j]);
        }
    }

    
    for (i = 0; i < num_students; i++) 
	{
        int total_marks = 0;
        
        for (j = 0; j < 5; j++) 
		{
            total_marks += students[i].marks[j];
        }
        
        students[i].percentage = total_marks / 5;

        
        if (students[i].percentage >= 80) 
		{
            students[i].grade = 'A';
        } 
		else if (students[i].percentage >= 65)
		{
            students[i].grade = 'B';
        } 
		else if (students[i].percentage >= 55) 
		{
            students[i].grade = 'C';
        } 
		else if (students[i].percentage >= 40) 
		{
            students[i].grade = 'D';
        } 
		else
		{
            students[i].grade = 'F';
        }
    }

	printf("\n\n\t -------- Print the Information -------- \n\n");
    for (i = 0; i < num_students; i++) 
	{
        printf("Roll Number: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: ");
        for (j = 0; j < 5; j++) 
		{
            printf("%d ", students[i].marks[j]);
        }
        printf("\n");
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Grade: %c\n\n", students[i].grade);
    }

    return 0;
}