#include "lists.h"
#include <stdio.h>

/**
 * print_list - print the element of a list
 * @h: linked list
 * Return: number of element in the list
 */
size_t print_list(const list_t *h)
{
	size_t length;

	length = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		length++;
		h = h->next;
	}
	return (length);
}
