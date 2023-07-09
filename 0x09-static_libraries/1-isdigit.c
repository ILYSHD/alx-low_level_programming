#include "main.h"

/**
 * _isdigit - writes if n is a digit
 * @n: The character to print
 *
 * Return: the result
 */

int _isdigit(int n)
{
	int result;

	if ((n >= 0 && n <= 9) || (n >= 48 && n <= 57))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
