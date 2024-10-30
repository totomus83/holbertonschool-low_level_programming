#include "main.h"

/**
 * print_rev - print in reverse a string
 * @s: string of characters
 */
void print_rev(char *s)
{
	int l;
	int r;
	int i;

	l = 0;
	while (s[l] != '\0')
	{
		l++;
	}
	i = l;
	r = i - 1;
	while (r >= 0)
	{
		_putchar(s[r]);
		r--;
	}
	_putchar('\n');
}
