#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog construct
 * @name: name of the new dog
 * @age: age of the enw dog
 * @owner: name of the owner
 * Return: return the new dog construct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int n, o, i;
	dog_t *newdog;

		n = 0;
	o = 0;
	while (name[n] != '\0')
		n++;
	while (owner[o] != '\0')
		o++;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = malloc((n + 1) * sizeof(char));
		if (newdog->name == NULL)
			return (NULL);
	i = 0;
	while (i < n)
	{
		newdog->name[i] = name[i];
		i++;
	}
	newdog->age = age;
	newdog->owner = malloc((o + 1) * sizeof(char));
	if (newdog->owner == NULL)
		return (NULL);
	i = 0;
	while (i < o)
	{
		newdog->owner[i] = owner[i];
		i++;
	}
	return (newdog);
}
