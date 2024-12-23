#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes the struct dog
 * @d: struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
