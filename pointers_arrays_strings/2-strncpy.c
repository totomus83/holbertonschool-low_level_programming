#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: second string copied
 * @n: characters printed
 * Return: return the destination
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
