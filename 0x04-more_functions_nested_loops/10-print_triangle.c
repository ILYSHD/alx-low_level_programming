#include "main.h"
/**
 * print_triangle - writes square
 * @size: parametre
 */
void print_triangle(int size)
{
	int i;
	int j;
	int e;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j <= size - i; ++j)
			{
				_putchar(' ');
			}
			for (e = j; e <= size; ++e)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
