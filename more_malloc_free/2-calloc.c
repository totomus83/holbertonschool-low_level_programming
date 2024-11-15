#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: adress to print
 * @size: size of memory to allocate
 * Return: return the adresses
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ret;
	unsigned int i, s;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	s = nmemb * size;
	ret = malloc(s);
	if (ret == NULL)
		return (NULL);
	while (i < s)
	{
		ret[i] = 0;
		i++;
	}
	return (ret);
}
