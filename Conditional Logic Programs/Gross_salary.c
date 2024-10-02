/* 32. Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\. */

#include <stdio.h>

int main() 
{
  float basic_salary, hra, da, gross_salary;

  printf("Enter the basic salary: ");
  scanf("%f", &basic_salary);

  if(basic_salary <= 10000) 
  {
    hra = (basic_salary * 20) / 100;
    da = (basic_salary * 80) / 100;
  } 
  else if(basic_salary <= 20000)
  {
    hra = (basic_salary * 25) / 100;
    da = (basic_salary * 90) / 100;
  } 
  else 
  {
    hra = (basic_salary * 30) / 100;
    da = (basic_salary * 95) / 100;
  }

  gross_salary = basic_salary + hra + da;

  printf("The gross salary is: Rs. %.2f\n", gross_salary);

}