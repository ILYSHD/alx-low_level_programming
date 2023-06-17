#include <stdio.h>

/**
 * main - a program to print all the alphabet except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if ((c != 'q') && (c != 'e'))
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
