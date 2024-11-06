#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of both diagonals of a square matrix
 * @a: int pointer
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int d1;
	int d2;

	d1 = 0;
	d2 = 0;
	i = 0;
	j = 1;
	while (i < size)
	{
		d1 = d1 + a[(size + 1) * i];
		d2 = d2 + a[(size - 1) * j];
		i++;
		j++;
	}
	printf("%d, %d\n", d1, d2);
}
