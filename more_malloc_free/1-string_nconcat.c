#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concaconate 2 string
 * @s1: string n1
 * @s2: string n2
 * @n: number of characters to concanotate in s2
 * Return: return the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr, *empt;
	unsigned int i, len, j;
	unsigned int size;


	i = 0;
	j = 0;
	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	len = strlen(s1);
	size = (len + n) * sizeof(char);
	nstr = malloc(size + 1);
	if (nstr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		nstr[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}
