#include "main.h"
#include <stdlib.h>

/**
 * str_concat - give memory to concaconate 2 string
 * @s1: first string
 * @s2: second string
 * Return: return new string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size1 = 0, size2 = 0;
	char *ptr, *ret;

	ptr = s1;
	if (s1)
		while (*ptr)
		{
			ptr++;
			size1++;
		}
	else
		s1 = "";
	ptr = s2;
	if (s2)
		while (*ptr)
		{
			ptr++;
			size2++;
		}
	else
		s2 = "";
	ret = malloc(size1 + size2 + 1);
	if (!ret)
		return (NULL);
	ptr = ret;
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (*s2)
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';
	return (ret);
}
