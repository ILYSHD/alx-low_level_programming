#include "main.h"

/**
 * _abs - a program to return the absolute value
 * @n: the parametre of our function
 * Return: 0 or 1 (Success)
 */

int _abs(int n)
{
	int v;
	int result;

	v = print_sign(n);
	if (v == 1)
	{
		result = n;
	}
	else
	{
		result = -n;
	}
	return (result);
}
