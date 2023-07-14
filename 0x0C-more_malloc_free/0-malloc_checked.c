#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function
 * @b: parametre
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	else
	{
		return (m);
	}
}
