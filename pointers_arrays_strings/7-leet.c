#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: string
 * Return: encoded string `s`
 */

char *leet(char *s)
{
	int i = 0;
	int j;
	char leet_chars[] = "43071";
	char normal_chars[] = "aeotlAEOTL";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			s[i] += (s[i] == normal_chars[j]) * (leet_chars[j / 2] - s[i]);
			j++;
		}
		i++;
	}

	return (s);
}
