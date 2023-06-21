#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a program to print numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
	else
	{
		for (i = n; i >= 98; --i)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
}
