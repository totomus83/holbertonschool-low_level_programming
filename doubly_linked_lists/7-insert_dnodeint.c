#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a node at index position in the list
 * @h: pointer to the head of the list
 * @idx: position in the list
 * @n: value of the node inserted at index
 * Return: the address of the new node, or NULL if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	dlistint_t *head;
	unsigned int i;

	node = NULL;
	if (idx == 0)
		node = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					node = add_dnodeint_end(h, n);
				else
				{
					node = malloc(sizeof(dlistint_t));
					if (node != NULL)
					{
						node->n = n;
						node->next = head->next;
						node->prev = head;
						head->next->prev = node;
						head->next = node;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (node);
}
