#include "main.h"

/**
 * _islower - a program to detect if 'c' is lower case
 * 'c' - the parametre of our function
 * Return: 0 or 1 (Success)
 */

int _islower(char c)
{
	char a;
	int result;

	for (a = 'a'; a <= 'z'; ++a)
	{
		if (c == a)
		{
			result = 1;
		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
