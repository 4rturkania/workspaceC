#include <stdio.h>

int main()
{
    char operator;
    double num1;
    double num2;
    double result;

    printf("What operation would you like to perform? (+, -, *, /)\n");
    scanf("%c", &operator);

    while (operator!= '+' && operator!= '-' && operator!= '*' && operator!= '/')
    {
        printf("Valid inputs are only +, -, * or /.\n");
        scanf(" %c", &operator);
    }

    printf("Please give two numbers you would like to perform mathematical operation on.\nFirst number: ");
    scanf("%lf", &num1);
    printf("Second number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%lf + %lf = %lf", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%lf - %lf = %lf", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%lf * %lf = %lf", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("%lf / %lf = %lf", num1, num2, result);
        break;
    default:
        printf("%c\n"); 
    }
}