#include "main.h"

/**
 * _strstr - search a substring in a string
 * @haystack: string to search
 * @needle: substring
 * Return: depends on the succes or fail
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i - j);
		else if (haystack[i] != needle[j])
			i++;
	}
	return (0);
}
