#include "main.h"

/**
 * more_numbers - writes numbers for 0 to 14
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; ++i)
	{
		for (j = 0; j <= 14; ++j)
		{
			if (j <= 9)
			{
				print_numbers();
			}
			else
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
		}
		_putchar('\n');
	}
}