#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_numbers - function
 *@separator: parametre
 *@n: parametre
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
		return;
	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(ap, int));
			printf("%s", separator);
		}
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("%d", va_arg(ap, int));
	printf("\n");
}
