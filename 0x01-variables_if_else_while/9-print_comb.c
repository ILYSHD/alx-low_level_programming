#include <stdio.h>

/**
 * main - a program to print all combination of single digits followed by ,
 * Return: 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 48; d <= 57; ++d)
	{
		putchar(d);
		if (d == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
