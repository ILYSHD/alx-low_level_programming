#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_strings - function
 *@separator: parametre
 *@n: parametre
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	unsigned int i;

	if (n == 0)
		return;
	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n - 1; i++)
		{	str = va_arg(ap, char *);
			printf("%s", str ? str : "(nil)");
			printf("%s", separator);
		}
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			str = va_arg(ap, char *);
			printf("%s", str ? str : "(nil)");
		}
	}
	str = va_arg(ap, char *);
	printf("%s", str ? str : "(nil)");
	printf("\n");
	va_end(ap);
}
