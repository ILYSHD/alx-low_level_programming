#include "main.h"

/**
 * _islower - a program to detect if c is lower case
 * @c: the parametre of our function
 * Return: 0 or 1 (Success)
 */

int _islower(int c)
{
	int result;

	if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
