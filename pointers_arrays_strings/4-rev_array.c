#include "main.h"

/**
 * reverse_array - reverse the elements in the array
 * @a: pointer to the array
 * @n: number of element in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int h;

	i = 0;
	while (i < (n / 2))
	{
		h = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = h;
		i++;
	}
}
