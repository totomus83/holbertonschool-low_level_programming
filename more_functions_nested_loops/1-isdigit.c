#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: character tested
 * Return: 1 if succes, 0 if failed
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
