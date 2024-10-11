/*3. WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers. */

#include<stdio.h>
int main()
{
	int num , i , evencount=0 , oddcount=0 , evensum=0 , oddsum=0;
	
	i=1;
	while(i<=10)
	{
		printf("Enter Your Number %d :",i);
		scanf("%d",&num);
		
		if(num%2==0)
		{
			evencount++;
			evensum += num;
		}
		else
		{
			oddcount++;
			oddsum += num;
		}
		i++;
	}
	printf("\nEven numbers : %d\n",evencount);
	printf("Odd numbers : %d\n",oddcount);
	printf("Sum of even numbers : %d\n",evensum);
	printf("Sum of odd numbers : %d\n",oddsum);
	
	return 0;		
}