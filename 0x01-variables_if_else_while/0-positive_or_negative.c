#include <stdlib.h>
#include <time.h>

/**
 * main - a program to print a line using printf functioin
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n > 0)
	{
		printf("%d is positive\n", n);
	} else
	{
		print("%d is zero\n", n);
	}
	return (0);
}
