#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_all - function
 *@format: parametre
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *sep = """";
	char *str;
	int i = 0;

	va_start(ap, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
