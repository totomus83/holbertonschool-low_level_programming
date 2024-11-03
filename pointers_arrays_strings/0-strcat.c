#include "main.h"

/**
 * _strcat - concaconate 2 strings
 * @dest: destination where the second string will be pasted
 * @src: first string
 * Return: the result of dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
