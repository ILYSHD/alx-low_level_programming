#include "dog.h"

/**
 * init_dog - function
 * @d: parametre
 * @name: parametre
 * @age: parametre
 * @owner: parametre
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
