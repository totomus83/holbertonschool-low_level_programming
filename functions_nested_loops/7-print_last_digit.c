#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @i: number read by the function
 * Return: return 1 % 10 if a number, return i if already a single digit
 */
int print_last_digit(int i)
{
	if (i >= 10)
		return (i % 10);
	else
		return (i);
}
