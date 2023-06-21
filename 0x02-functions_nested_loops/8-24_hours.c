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

	for (i = 48; i <= 50; ++i)
	{
		for (j = 48; j <= 57; ++j)
		{
			for (k = 48; k <= 53; ++k)
			{
				for (e = 48; e <= 57; ++e)
				{
					if (i >= 50 && j >= 52)
					{
						continue;
					}
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
