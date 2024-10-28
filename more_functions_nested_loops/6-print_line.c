#include "main.h"

/**
 * print_line - prints the characters
 * @n: number of characters needed to print
 */
void print_line(int n)
{
	int l;

	l = 0;
	while (l < n)
	{
		_putchar('_');
		l++;
	}
	_putchar('\n');
}
