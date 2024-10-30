#include "main.h"

/**
 * puts_half - print the upper half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int l;
	int i;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}

	if (str[l] / 2 == 0)
	{
		i = l / 2;
		while (i < l)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = l / 2 + 1;
		while (i < l)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
