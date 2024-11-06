#include "main.h"

/**
 * factorial - return the factorial value of number n
 * @n: integer
 * Return: factorial number of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
