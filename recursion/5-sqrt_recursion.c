#include "main.h"

/**
 * _helper - find the square root
 * @i: variable used to find the square root
 * @n: number tested
 * Return: either -1, 1 or continue chekcing with i
 */

int _helper(int i, int n)
{
	if ((i * i) > n)
		return (-1);
	else if ((i * i) == n)
		return (i);
	return (_helper(i + 1, n));
}
/**
 * _sqrt_recursion - launch recursion
 * @n: number tested
 * Return: recursion
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_helper(0, n));
}
