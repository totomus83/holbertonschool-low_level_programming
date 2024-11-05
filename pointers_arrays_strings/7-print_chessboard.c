#include "main.h"

/**
 * print_chessboard - function to print a chessboard
 * @a: variable used as array
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	while (i < 8)
	{
		while (j < 8)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
				_putchar(a[i][j]);
			j++;
		}
		i++;
		j = 0;
	}
}
