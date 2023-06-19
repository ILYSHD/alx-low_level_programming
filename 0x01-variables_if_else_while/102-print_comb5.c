#include <stdio.h>

/**
 * main - a program to print all combinations of two two two digits
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;
	int e;

	for (i = 48; i <= 57; ++i)
	{
		for (j = 48; j <= 57; ++j)
		{
			for (k = 48; k <= 57; ++k)
			{
				for (e = 48; e <= 57; ++e)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(e);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
