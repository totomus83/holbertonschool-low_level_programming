#include "main.h"

/**
 * print_alphabet - print the alphabet
 * Return: return 0 if success
 */
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
