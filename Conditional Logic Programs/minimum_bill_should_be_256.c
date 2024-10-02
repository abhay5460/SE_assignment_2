// 30. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-.

#include<stdio.h>
int main()
{
	float bill_amount , surcharge , total_amount ;
	
	printf("Enter Value of bill amount :");
	scanf("%f",&bill_amount);
	
	if(bill_amount > 800)
	{
		surcharge = (bill_amount * 18) / 100;
    	total_amount = bill_amount + surcharge;
  	}
   else 
    {
    	total_amount = bill_amount;
    }

	if(total_amount < 256)
    {
    	total_amount = 256;
  	}

 	printf("The total bill amount is: Rs. %.2f\n", total_amount);

}
