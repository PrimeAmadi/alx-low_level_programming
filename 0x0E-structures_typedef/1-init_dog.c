#include "dog.h"

/**
 * init_dog - initialize dog struct
 * @d: pointer to struct dog
 * @name: map to name of dog
 * @age: map to age of dog
 * @owner: map to owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == ((void *)0))
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
