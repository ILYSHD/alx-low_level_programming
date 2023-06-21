#include "main.h"

/**
 * print_alphabet - a program to print all the alphabet in lower case 10times
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char c;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; ++c)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
