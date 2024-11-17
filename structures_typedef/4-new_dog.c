#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: newdog struct
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
	newdog->owner = malloc((o + 1) * sizeof(char));
	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		newdog->name[i] = name[i];
		i++;
	}
	newdog->name[n] = '\0';
	newdog->age = age;
	i = 0;
	while (i < o)
	{
		newdog->owner[i] = owner[i];
		i++;
	}
	newdog->owner[o] = '\0';
	return (newdog);
}
