#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returnes the number of elements
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n1 = 0;
	size_t n2 = 0;

	while (h)
	{
		n1++;
		h = h->next;
	}
	while (h)
	{
		n2++;
		h = h->prev;
	}
	return (n1 + n2);
}
