#include "main.h"
/**
 * is_prime_number - initiate the checker
 * _checker -  checks if number is prime
 * @n: number to test
 * @i: tester
 * Return: 1 if prime 0 if else
 */
int _checker(int i, int n)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	return (_checker(i + 1, n));
}
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_checker(2, n));
}
