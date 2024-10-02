/*19. Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow :
20. Unit								21. Charge/unit
	22. upto 350							23. @1.20
	24. 350 and above but less than 600		25. @1.50
	26. 600 and above but less than 800		27. @1.80
	28. 800 and above						29. @2.00 */
	
#include <stdio.h>
int main() 
{
  int customer_id;
  char customer_name[50];
  float units_consumed, total_amount;

  printf("Enter the customer ID: ");
  scanf("%d", &customer_id);

  printf("Enter the customer name: ");
  scanf("%s", customer_name);

  printf("Enter the units consumed: ");
  scanf("%f", &units_consumed);

  if(units_consumed <= 350)
  {
    total_amount = units_consumed * 1.20;
  } 
  else if(units_consumed < 600) 
  {
    total_amount = units_consumed * 1.50;
  } 
  else if(units_consumed < 800)
  {
    total_amount = units_consumed * 1.80;
  }
  else 
  {
    total_amount = units_consumed * 2.00;
  }
  	printf("Customer ID: %d\n", customer_id);
  	printf("Customer Name: %s\n", customer_name);
  	printf("Units Consumed: %.2f\n", units_consumed);
  	printf("Total Amount to be Paid: Rs. %.2f\n", total_amount);
}
