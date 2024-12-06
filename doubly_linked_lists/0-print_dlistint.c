#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print value of each node
 * @h: pointer to the list
 * Return: number of node in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return(length);
}
