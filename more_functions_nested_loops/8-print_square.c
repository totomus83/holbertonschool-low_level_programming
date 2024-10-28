#include "main.h"

/**
 * print_square - print the square
 * @size: width and height of the square
 */
void print_square(int size)
{
	int l;
	int w,

	h = 0;
	w = 0;
	while (h < size)
	{
		while (w < size)
		{
			_putchar('#');
			w++;
		}
		w = 0;
		_putchar('\n');
		h++;
	}
}
