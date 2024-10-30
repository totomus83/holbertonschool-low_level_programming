#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array
 * @a: array
 * @n: position in the array
 */

void print_array(int *a, int n)
{
	n = 0;
	while (n < 5)
	{
		printf("%d", a[n]);
		if (n < 4)
			printf(", ");
		n++;
	}
	printf("\n");
}
