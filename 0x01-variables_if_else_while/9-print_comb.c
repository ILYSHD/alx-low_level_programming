#include <stdio.h>

/**
 * main - a program to print all combination of single digits followed by ,
 * Return: 0 (Success)
 */

int main(void)
{
	int d = 48;

	for (d = 49; d <= 57; ++d)
	{
		putchar(',');
		putchar(' ');
		putchar(d);
	}
	putchar('$');
	return (0);
}
