#include "main.h"

/**
 * print_alphabet_x10 - function printing the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	i = 'a';
	j = 1;
	while (j < 11)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		i = 'a';
		j++;
	}
}
