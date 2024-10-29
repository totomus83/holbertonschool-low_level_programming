#include "main.h"

/**
 * print_triangle - pting a triangle
 * @size: determines the size
 */

void print_triangle(int size)
{
	int w;
	int b;

	b = 1;
	w = 1;
	if (size == 0 || size < 0)
		_putchar('\n');
	while (b <= size)
	{
		while (w <= size)
		{
			if (size - b >= w)
				_putchar(' ');
			else
				_putchar('#');
			w++;
		}
		b++;
		w = 1;
		_putchar('\n');
	}
}
