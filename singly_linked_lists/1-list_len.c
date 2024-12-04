#include "lists.h"

/**
 * list_len - calculate the length of a list
 * @h: linked list
 * Return: the lengths
 */

size_t list_len(const list_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
