#include "hash_tables.h"

/**
* hash_table_set - implementation of the djb2 algorithm
* @ht: table
* @key: string
* @value: string
* Return: hash value
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode;
	unsigned long int i;

	if (key == NULL)
		return (0);
	index = key_index(key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	if (newnode->key == NULL)
		return (0);
	newnode->value = strdup(value);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
