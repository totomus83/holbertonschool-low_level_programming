#include "main.h"

/**
 * _strspn - count the number of corresponding characters
 * @s: string of characters to check
 * @accept: characters accepted and counted
 * Return: return the variable count
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c;

	c = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (i == c)
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
					c++;
			j++;
			}
		j = 0;
		i++;

	}
	return (c);
}
