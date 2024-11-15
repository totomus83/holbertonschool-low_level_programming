#include "main.h"
#include <stdlib.h>

/**
 * array_range - print everything in between min and max
 * @min: starting value
 * @max: ending value
 * Return: return an array of int inbetween min and max
 */

int *array_range(int min, int max)
{
	int *ret;
	int n, m, i;

	if (min > max)
		return (NULL);
	n = max - min;
	ret = malloc((n + 1) * sizeof(int));
	if (ret == NULL)
		return (NULL);
	i = 0;
	m = min;
	while (m < max)
	{
		ret[i] = m;
		i++;
		m++;
	}
	return (ret);
	}
