#include "main.h"

/**
 * binary_to_uint - a function to convert binary to decimal
 *@b : parametre
 *Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j = 0;
	int number;
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	number = _atoi(b);
	while (number != 0)
	{
		value = value + (number % 10) * _pow_recursion(2, j);
		j = j + 1;
		number = number / 10;
	}
	return (value);
}
