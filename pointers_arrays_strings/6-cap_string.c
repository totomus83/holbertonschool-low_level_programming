#include "main.h"

/**
 * cap_string - capitalize all words
 * @str: string
 * Return: value str
 */

char *cap_string(char *str)
{
	int i, c;
	int t;
	char n[] = ",;.!?(){}\n\t\" ";
	
	i = 0;
	t = 0;
	while (str[i] != '\0')
	{
		if (str[0] > 96 && str[0] < 123)
			t = 1;
		c = 0;
		while (n[c] != '\0')
		{
			if (n[c] == str[i])
				t = 1;
			c++;
		}
		if (t)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				t = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				t = 0;
			else if (str[i] > 47 && str[i] < 58)
				t = 0;
		}
		i++;
	}
	return (str);
}
