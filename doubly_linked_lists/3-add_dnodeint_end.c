#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a node at the end of the list
 * @head: double pointer to the start of the list
 * @n: value copied in the node
 * Return: return the adress of newnode
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tail;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	tail = *head;
	if (*head == NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
	newnode->prev = tail;

	return (newnode);
}
