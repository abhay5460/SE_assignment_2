// 5. WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice.
#include <stdio.h>
int main() 
{
    int arr1[10], arr2[10], size1, size2, choice, i, j, temp;

    printf("\n\n\tEnter the size of array 1: ");
    scanf("%d", &size1);

    printf("\n\n\tEnter the elements of array 1: ");
    for (i = 0; i < size1; i++)
	{
        scanf("%d", &arr1[i]);
    }

    printf("\n\n\tEnter the size of array 2: ");
    scanf("%d", &size2);

    printf("\n\n\tEnter the elements of array 2: ");
    for (i = 0; i < size2; i++) 
	{
        scanf("%d", &arr2[i]);
    }

    printf("\n\n\tEnter your choice (1 for ascending, 2 for descending): ");
    scanf("%d", &choice);

    if (choice == 1) 
	{
        for (i = 0; i < size1 - 1 ; i++)
		{
            for (j = i + 1 ; j < size1; j++) 
			{
                if (arr1[i] > arr1[j]) 
				{
                    temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
    }
	else if (choice == 2)
	{
        for (i = 0; i < size1 - 1; i++) 
		{
            for (j = i + 1; j < size1; j++) 
			{
                if (arr1[i] < arr1[j]) 
				{
                    temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
    }

    if (choice == 1)
	{
        for (i = 0; i < size2 - 1; i++) 
		{
            for (j = i + 1; j < size2; j++) 
			{
                if (arr2[i] > arr2[j]) 
				{
                    temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
    } 
	else if (choice == 2)
	{
        for (i = 0; i < size2 - 1; i++) 
		{
            for (j = i + 1; j < size2; j++) 
			{
                if (arr2[i] < arr2[j]) 
				{
                    temp = arr2[i];
                    arr2[i] = arr2[j];
                    arr2[j] = temp;
                }
            }
        }
    }

    printf("\n\n\tSorted array 1: ");
    for (i = 0; i < size1; i++) 
	{
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("\n\n\tSorted array 2: ");
    for (i = 0; i < size2; i++)
	 {
        printf("%d ", arr2[i]);
    }
    printf("\n");

}