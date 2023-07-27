#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - function
 * @h: parametre
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			count++;
			printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}
	return (count);
}
