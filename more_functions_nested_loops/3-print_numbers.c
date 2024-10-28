#include "main.h"
/**
 * print_numbers - function that prints
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
