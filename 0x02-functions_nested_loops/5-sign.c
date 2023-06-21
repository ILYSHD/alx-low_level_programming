#include "main.h"

/**
 * print_sign - a program to detect the sign of n
 * @n: the parametre of our function
 * Return: 0 or 1 (Success)
 */

int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else
	{
		result = 0;
		_putchar('0');
	}
	return (result);
}
