#include "main.h"

/**
 * print_alphabet - a program to print all the alphabet in lower case
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
