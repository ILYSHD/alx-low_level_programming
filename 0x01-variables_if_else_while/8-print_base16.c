#include <stdio.h>

/**
 * main - a program to print numbers in 16base
 * Return: 0 (Success)
 */

int main(void)
{
	char c;
	int d;

	for (d = 48; d <= 57; ++d)
	{
		putchar(d);
	}
	for (c = 'a'; c <= 'f'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
