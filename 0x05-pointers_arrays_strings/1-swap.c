#include "main.h"
/**
 * swap_int - function
 * @a: parametre
 * @b: parametre
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
