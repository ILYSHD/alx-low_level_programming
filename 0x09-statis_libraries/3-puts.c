#include "main.h"
/**
 * _puts - function
 * @str: parametre
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
