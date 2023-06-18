#include <stdio.h>

/**
 * main - a program to print all combination of single digits followed by ,
 * Return: 0 (Success)
 */

int main(void)
{
	int d;

	for (d = 48; d <= 56; ++d)
	{
		putchar(d);
		putchar(',');
		putchar(' ');
	}
	putchar(57);
	return (0);
}
