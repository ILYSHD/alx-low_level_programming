#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 * @size: parametre
 * @c: parametre
 * Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
	char *e;

	if (size != 0)
	{
		e = malloc(size);
		if (e != NULL)
		{
			*e = c;
			return (e);
		}
		else
		{
			return (NULL);
		}
	}
	else
	{
		return (NULL);
	}
}
