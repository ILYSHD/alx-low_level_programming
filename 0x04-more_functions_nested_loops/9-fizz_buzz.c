#include <stdio.h>

/**
 * main - main program
 * Return: 0 (seccess)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0 && i % 5 != 0 && i != 100)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0 && i % 3 != 0 && i != 100)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0 && i != 100)
		{
			printf("FizzBuzz ");
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
