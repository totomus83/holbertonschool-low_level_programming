#include "main.h"

/**
 * _strncat - copies at the end of the first string the second one
 * @dest: destination where the second string is copied
 * @src: second string
 * @n: of character printed from the second string
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}

	return (dest);
}
