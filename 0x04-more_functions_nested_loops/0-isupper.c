#include "main.h"

/**
 * _isupper - writes if c is uppercase
 * @c: The character to test
 *
 * Return: the result
 */

int _isupper(int c)
{
	int result;

	if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
