#include "main.h"

/**
 * _print_rev_recursion - function
 * @s: parametre
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	s++;
	_print_rev_recursion(s);
	_putchar(*s);
}
