#include <stdio.h>

/**
 * main - a program to print all combinations of two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; ++i)
	{
		for (j = i + 1; j <= 57; ++j)
		{
			putchar(i);
			putchar(j);
			if (i == 56)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
