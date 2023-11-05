#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function
 * @h: parametre
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
