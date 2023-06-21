#include "main.h"

/**
 * print_last_digit - a program toprint last digit
 * @n: the parametre of our function
 * Return: 0 or 1 (Success)
 */

int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (result <= 0)
	{
		_putchar(-result + 48);
	}
	else
	{
		_putchar(result + 48)
	}
	return (result);
}
