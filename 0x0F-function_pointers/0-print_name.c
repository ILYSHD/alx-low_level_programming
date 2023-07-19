#include "main.h"
/**
 * print_name - function
 * @name: parametre
 * @f: fucntion pointer
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
	_putchar('\n');
}
