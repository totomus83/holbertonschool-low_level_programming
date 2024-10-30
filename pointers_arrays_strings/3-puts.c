#include "main.h"

/**
 * _puts - print a string of characters
 * @str: variable representing the string
 */

void _puts(char *str)
{
	int c;

	c = 0;
	while (str[c] != 0)
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
