#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function
 * @nmemb: parametre
 * @size: parametre
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *m;
	unsigned int taill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	taill = nmemb * size;
	m = malloc(taill);
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < taill; i++)
	{
		m[i] = 0;
	}
	return (m);
}
