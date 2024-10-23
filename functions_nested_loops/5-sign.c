#include "main.h"

/**
 *print_sign - test if variable c is positive, negative or 0
 *@n: character to be verified
 * Return: if succes return 1, if not return 0
 */

int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
