#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - function
 * @s: parametre
 *Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * new_dog - function
 * @name: parametre
 * @age: parametre
 * @owner: parametre
 *Return: a dog t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1, len2, i, j;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(len1 * sizeof(char) + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(len2 * sizeof(char) + 1);
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	for (j = 0; j < len2; j++)
		d->owner[j] = owner[j];
	d->owner[j] = '\0';
	d->age = age;
	return (d);
}
