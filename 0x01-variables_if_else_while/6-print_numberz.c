#include <stdio.h>

/**
 * main - a program to print all the digits from 0 to 9
 * Return: 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 48; c < 58; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
