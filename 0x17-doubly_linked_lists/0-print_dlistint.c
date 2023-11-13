#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n1 = 0;
	size_t n2 = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n1++;
		h = h->next;
	}
	while (h)
	{
		printf("%d\n", h->n);
		n2++;
		h = h->next;
	}
	return (n1 + n2);
}
