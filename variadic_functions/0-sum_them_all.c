#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all the integers of an array
 * @n: number of int in the array
 * Return: return the variable result holding all the sums
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
