#include "main.h"
/**
 * swap_int - function that swap the values of *a and *b
 * @a: first variable
 * @b: second variable
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*b = *a;
	*a = c;
}
