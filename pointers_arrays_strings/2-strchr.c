#include "main.h"

/**
 * _strchr - return a string starting a specific characters
 * @s: string
 * @c: specific character
 * Return: either '\0' or s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return ('\0');
}
