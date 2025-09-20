#include <stdio.h>
int main() {
    char operator;
    double num1 , num2;
    printf("Enter the value of Number1: ");
    scanf("%lf" ,& num1);
    printf("Enter operator(+,-,*,/) : ");
    scanf(" %c",& operator);
    printf("Enter the value of Number2: ");
    scanf("%lf" ,& num2);
switch (operator)
{
case '+':
    printf("Result = %.2lf\n", num1+num2);
    break;
case '-':
    printf("Result = %.2lf\n", num1-num2);
    break;
case '*':
    printf("Result = %.2lf\n", num1*num2);
    break;
case '/':
    if (num2==0)
    {
        printf("Error! A Number can not be divided by zero");
    }
    else
    {
    printf("Result = %.2lf\n", num1/num2);
    }
    break;
    
default: printf("Invalid Operator");
    
}
}