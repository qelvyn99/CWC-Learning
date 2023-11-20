#include <stdio.h>

int main(void)

{
	//This declares and initializes two variables
	int num1 = 8;
	int num2 = 4;

	//performs addition
	printf("Addition: %d/n", num1 + num2);

	//performs subtraction
	printf("The subtraction of both numbers is %d/n", num1 - num2);
	
	//performs multiplication
	printf("The multiplication of both numbers is %d/n", num1 * num2);

	//performs division
	printf("Division of both numbers is %d/n", num1 / num2);

	//performs the modulus-returns the remainder when one integer is divided by another
	printf("Modulus for the two numbers is %d/n", num1 % num2);

	return (0);

}
