#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: memory to copy to destination
 * @n: memory left
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}