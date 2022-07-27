#include <stdio.h>

void addition(long int a, long int b)
{
    printf("the value after adding the two given numbers is: %ld", a + b);
}

void subtraction(long int num1,long int num2)
{
    printf("the value after subtracting the two given number is: %ld", num1 - num2);
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
    printf("please enter \n 1 for addition \n 2 for subtraction\n ");
    scanf("%d", &to_do);
    switch (to_do)
    {
    case 1:
        addition(num1 , num2);
        break;
    
    case 2:
        subtraction(num1 , num2);
        break;
    
    default:
        break;
    }
}