#include "main.h"

/**
 * rev_string - reverse the string s
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int last;
	int first;
	int temp;

	last = 0;
	while (s[last] != '\0')
	{
		last++;
	}
	first = 0;
	while (first < last / 2)
	{
		temp = s[first];
		s[first] = s[last - 1 - first];
		s[last - 1 - first] = temp;
		first++;
	}
}
