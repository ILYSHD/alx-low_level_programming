#include "main.h"

/**
 * jack_bauer - a program to print every minute of the day
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int e;

	for (i = 0; i <= 2; ++i)
	{
		for (j = 0; j <= 3; ++j)
		{
			for (k = 0; k <= 5; ++k)
			{
				for (e = 0; e <= 9; ++e)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(e);
					_putchar('\n');
				}
			}
		}
	}
}
