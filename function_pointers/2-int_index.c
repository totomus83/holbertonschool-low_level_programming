#include "function_pointers.h"

/**
 * int_index - search for int
 * @array: array of int
 * @size: size of the array
 * @cmp: function to use
 * Return: return -1 if fails, return the index number when function not true
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
