#include "dog.h"
#include <stdlib.h>
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

	d = malloc(sizeof(struct dog));
	if (d == NULL)
	{
		return (NULL);
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
		return (d);
	}
}
