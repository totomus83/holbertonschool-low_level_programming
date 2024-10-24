#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @i: number read by the function
 * Return: return 1 % 10 if a number, return i if already a single digit
 */
int print_last_digit(int i)
{
	int lastd = i % 10;

	if (lastd < 0)
		lastd = -lastd;

	_putchar(lastd + '0');
	return (lastd);

}
