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
	unsigned int i;

	if (size != 0)
	{
		e = malloc(size);
		if (e != NULL)
		{
			for (i = 0; i < size; ++i)
			{
				*(e + i) = c;
			}
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
