#include "main.h"

/**
 * clear_bit - a function to set bite at an index
 * @n: parametre
 * @index: parametre
 *Return: 1 if it worked -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
