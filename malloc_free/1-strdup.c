#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to an allocated space
 * @str: a string of characters
 * Return: a pointer to a space in memory
 */
char *_strdup(char *str)
{
	int size;
	char *ptr, *ret;

	size = 0;
	if (!str)
		return (NULL);

	ptr = str;
	while (*ptr)
	{
		size++;
		ptr++;
	}
	ret = malloc(size + 1);
	if (!ret)
		return (NULL);

	ptr = ret;
	while (*str)
	{
		*ptr = *str;
		ptr++;
		str++;
	}
	*ptr = '\0';
	return (ret);
}
