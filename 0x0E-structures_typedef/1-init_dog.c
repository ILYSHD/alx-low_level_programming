#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function
 * @d: parametre
 * @name: parametre
 * @age: parametre
 * @owner: parametre
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
