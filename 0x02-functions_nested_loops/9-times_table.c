#include "main.h"

/**
 * times_table - a program to print 9 times table
 */

void times_table(void)
{
	int i;
	int j;
	int k;
	int z;
	int c;

	for (i = 0; i <= 9; ++i)
	{
		_putchar('0');
		for (j = 1; j <= 9; ++j)
		{
			k = i * j;
			z = k / 10;
			c = k % 10;
			if (z != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(z + '0');
				_putchar(c + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		_putchar('\n');
	}
}
