#include "main.h"

/**
 * _strcat - concaconate 2 strings
 * @dest: destination where the second string will be pasted
 * @src: first string
 * Return: the result of dest
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest);
}
