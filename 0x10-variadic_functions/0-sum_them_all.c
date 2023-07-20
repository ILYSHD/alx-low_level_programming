#include "variadic_functions.h"
#include <stdlib.h>

/**
 *sum_them_all - function
 *@n: parametre
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, m;
	if (n == 0)
		return (0);
	va_start(ap, n);
	m = 0;
	for (i = 0; i < n; i++)
	{
		m = m + va_arg(ap, int);
	}
	return (m);
}
