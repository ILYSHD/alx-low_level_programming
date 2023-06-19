#include <stdio.h>

/**
 * main - a program to print all combinations of three digits
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i <= 55; ++i)
	{
		for (j = i + 1; j <= 57; ++j)
		{
			for (k = j + 1; k <= 57; ++k)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
