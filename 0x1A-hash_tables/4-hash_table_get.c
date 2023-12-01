#include "hash_tables.h"

/**
* hash_table_get - a function that used to retrieve a value
* @key: key
* @ht: hash table
* Return: value otherwise return NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	if (node == NULL)
	{
		return (NULL);
	}
	else
		return (node->value);
}
