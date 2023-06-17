#include <stdio.h>

/**
 * main - a program to print a line using printf functioin
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
