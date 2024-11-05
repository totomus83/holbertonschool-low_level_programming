#include "main.h"

/**
 * _strpbrk - return the corresponding characters in a string
 * @s: string that must be checked
 * @accept: characters accepted
 * Return: characters accepted
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;
	while (*s)
	{
		while (accept[i] != 0)
		{
			if (accept[i] == *s)
				return (s);
			i++;
		}
		i = 0;
		s++;
	}
	return ('\0');
}
