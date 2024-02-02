#include <stdio.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

int main(void)
{
    int a;
    int b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf(("%d\n"), add(a, b));
     printf(("%d\n"), subtract(a, b));
      printf(("%d\n"), multiply(a, b));
       printf(("%d\n"), divide(a, b));

    return (0); 
}

int add(int num1, int num2) /* placeholder for variables*/
{
    return num1 + num2;
}

int subtract(int num1, int num2);
{
   return num2 - num1; 
}

int multiply(int num1, int num2);
{
   return num1 * num2; 
}

int divide(int num1, int num2);
{
   return num1 / num2; 
}

