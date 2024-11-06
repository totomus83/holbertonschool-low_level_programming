#include "main.h"

/**
 * _puts_recursion - print each character in a string
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
