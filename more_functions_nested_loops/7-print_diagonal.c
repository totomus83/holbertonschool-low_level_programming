#include "main.h"

/**
 * print_diagonal - print space and backslash
 * @n: number determining what is printed
 */
void print_diagonal(int n)
{
	int l;
	int s;

	l = 0;
	s = 0;

	while (l < n)
	{
		while (s < l)
		{
			_putchar(' ');
			s++;
		}
		s = 0;
		_putchar(92);
		_putchar('\n');
		l++;

	}

}
