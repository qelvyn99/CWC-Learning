#include <stdio.h>

int main (void)
{
	/*Declares a variable to store the number the user enters*/
	int number;

	/*This helps get the number from the user*/
	printf("Enter your number:");
	scanf("%d" , &number);

	/*This checks if a number is positive,negative or zero*/
	if (number > 0)
	{
		printf("This is a Positive number\n");
	}
	else if (number < 0)
	{
		printf("This is a Negative number\n");
	}
	if (number == 0)
	{
		printf("This number is a zero\n");
	}

	return (0);
}
