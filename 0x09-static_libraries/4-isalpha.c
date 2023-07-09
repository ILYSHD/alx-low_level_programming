#include "main.h"

/**
 * _isalpha - a program to detect if c is a charactere
 * @c: the parametre of our function
 * Return: 0 or 1 (Success)
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
