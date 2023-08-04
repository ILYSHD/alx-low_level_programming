#include "main.h"
/**
 * get_bit - function to return the bite at the index
 *@n : parametre
 *@index : parametre
 *Return: the bite
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;
	unsigned long int value;

	if (index > 63)
		return (-1);
	value = n >> index;
	result = value & 1;
	return (result);
}
