#include "lists.h"
#include <stdlib.h>
/**
 * list_len - return the number of elmnts
 * @h:parametre
 * Return: number of elmnts
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
