#include "hash_tables.h"

/**
* key_index - implementation of the djb2 algorithm
* @key: key
* @size: size of the array
*
* Return: the index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
