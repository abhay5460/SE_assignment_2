// 12. Program of Armstrong Number in C Using For Loop & While Loop.
#include <stdio.h>
int main()
{
   int num, temp, rem, arm=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while(num>0)
	{ 
		rem=num%10;
		arm=(rem*rem*rem) + arm;
		num=num/10;
	}
	
    if (temp == arm) 
	{
        printf("%d is an Armstrong number.\n", temp);
    } 
	else 
	{
        printf("%d is not an Armstrong number.\n", temp);
    }
}
