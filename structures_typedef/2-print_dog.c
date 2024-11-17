#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print the name, age and owner's name of the d dog
 * @d: pointer to the struct dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
		printf("Age: %f\n", d->age);
		d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));
	}
}
