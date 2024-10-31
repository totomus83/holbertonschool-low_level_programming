#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @src: string of characters
 * @dest: where the string is supposed to be copied
 * Return: return the value of the variabkle dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
