// Write a program to check whether the input number is prime or not.

#include <stdio.h>

void main()
{
    int input_number;
    int count = 0;
    printf("Enter the number: ");
    scanf("%d", &input_number);

    // 11 => 2->10 not divided
    // 8 => 2-7 divided
    // 5
    for (int i = 2; i < input_number; i++)
    {
        if (input_number % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
}