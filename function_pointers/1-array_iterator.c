#include "function_pointers.h"

/**
 * array_iterator - goes through an array with function action
 * @array: array of int
 * @size: size of the array
 * @action: array goes through function action at every index
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
