#include <stdio.h>

int main (void)
{
	int i;

	while(i <= 100)
	{
		printf("Enter your guess (1-100):");
		scanf("%d", &i);
		if (i != i)
		{
			printf("Incorrect! Try higher\n");
			continue;
		}

		printf("Enter your guess (1-100):");
		scanf("%d", &i);
		if (i != i)
		{
			printf("Incorrect! Try lower\n");
			continue;
		}

		printf("Enter your guess (1-100):");
		scanf("%d", &i);
		if (i == i)
		{
			printf("Congratulations you guessed the correct answer in %d attempts\n");
			break;
		}

	return (0);
}
