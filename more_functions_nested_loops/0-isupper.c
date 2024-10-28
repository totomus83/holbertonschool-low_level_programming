#include "main.h"
/**
 * _isupper - select only upper case letter
 * Return: 0 if non upper case, 1 if uppercase
 * @c: tested number
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
