#include "main.h"
/**
 * _checker -  checks if number is prime
 * @i: divider
 * @n: number to check
 * Return: return either 0, 1 or recursion happen to continue checking
 */
int _checker(int i, int n)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	return (_checker(i + 1, n));
}
/**
 * is_prime_number - initiate the checker
 * @n: number to test
 * Return: 1 if prime 0 if else
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_checker(2, n));
}
