#include "main.h"
#include <stdlib.h>

/**
 * array_range - function
 * @min: parametre
 * @max: parametre
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int *m;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	m = malloc(sizeof(int) * (max - min + 1));
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; ++i)
	{
		m[i] = min + i;
	}
	return (m);
}
