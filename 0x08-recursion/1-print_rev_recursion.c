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
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
