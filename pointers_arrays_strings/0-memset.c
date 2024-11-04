#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: value returned
 * @b: constant
 * @n: memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
