#include "main.h"


int _strlen_recursion(char *s)
{
	int i;

	i = 1;
	if(*s)
	{
		i = i + _strlen_recursion(s + 1);
		return(i);
	}
	return (0);
}
