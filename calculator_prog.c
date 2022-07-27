#include <stdio.h>

void addition(long int a, long int b)
{
    printf("the value after adding the two given numbers is: %ld", a + b);
}

void subtraction(long int num1, long int num2)
{
    printf("the value after subtracting the two given number is: %ld", num1 - num2);
}

void multiplication(long int num1, long int num2)
{
    printf("the value after multiplying the two given number is: %ld", num1 * num2);
}

void division(long int num1, long int num2)
{
    if (num2 != 0)
    {
        if (num1 % num2 != 0)
        {
            float c = num1 / (float)num2;
            printf("the value after dividing the two given number is: %f", c);
        }
        else
        {
            printf("the value after dividing the two given number is: %ld", num1 / num2);
        }
    }
    else
    {
        printf("ERROR : denominator cannot be 0\n");
    }
}

int main()
{
    long int num1;
    printf("please Enter num1:\n");
    scanf("%ld", &num1);
    long int num2;
    printf("please Enter num2:\n");
    scanf("%ld", &num2);
    int to_do;
    printf("please enter \n 1 for addition \n 2 for subtraction\n 3 for multiplication \n 4 for division \n");
    scanf("%d", &to_do);
    switch (to_do)
    {
    case 1:
        addition(num1, num2);
        break;

    case 2:
        subtraction(num1, num2);
        break;

    case 3:
        multiplication(num1, num2);
        break;

    case 4:
        division(num1, num2);
        break;

    default:
        printf("please enter command from the given options only and try again");
        break;
    }
}