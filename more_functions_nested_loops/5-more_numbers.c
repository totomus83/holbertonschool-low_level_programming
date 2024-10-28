#include "main.h"

/**
 * more_numbers - function printing
 */

void more_numbers(void)
{
	int n;
	int l;

	n = 0;
	l = 0;
	while	(l < 10)
	{
		while (n < 15)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
				_putchar(n + '0');
			n++;
		}
		n = 0;
		_putchar('\n');
		l++;
	}
}
