#include <stdio.h>

int calculate(int a, int b);
int addition(int a,int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);

int main(void)
{
    int result;
    int a;
    int b;
    int number1=1;
    int number2=2;
    int number3=3;
    int number4=4;
    int terminate1 = 1;
    int terminate2 = 0;

    calculate(int a, int b);	
	
    printf("Enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    printf("Select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter the operation (1-4):\n");
    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);
    scanf("%d", &number4);

    result = addition(a, b);
     printf(" Result of addition: %d\n", result);

    result = subtraction(a, b);

    printf(" Result of subtraction: %d\n", result);

    result = multiplication(a, b);
    printf(" Result of multiplication: %d\n", result);

    result = division(a, b);
    printf(" Result of division: %d\n", result);

    printf("Perform another calculation? (1 for Yes,0 for No):")
    scanf("%d", &terminate1);
    scanf("%d", &terminate2);
	   
    return (0);
}




int subtract(int a, int b)
{
    int result = a - b;

    return result;
}

int multiplication(int a, int b)
{
    int result;

    result = a * b;

    return result;
}

int add(int a, int b)
{
    int result = a + b;

    return result;
}

int division(int a, int b)
{
    int result = a / b;

    return result;
}


