#include "variadic_functions.h"

/**
 * sum_them_all - sums all the integers of an array
 * @n: number of int in the array
 * Return: return the variable result holding all the sums
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, result = 0;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(valist, const unsigned int);
	}
	va_end(valist);

	return (result);
}
