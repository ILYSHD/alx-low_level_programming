#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_strings - function
 *@separator: parametre
 *@n: parametre
 *@...: variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n ; i++)
	{
		str = va_arg(ap, char *);
		printf("%s", str ? str : "(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
