#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate b number of memory to a pointer
 * @b: amount of memory allocated
 * Return: pointer m
 */

void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
