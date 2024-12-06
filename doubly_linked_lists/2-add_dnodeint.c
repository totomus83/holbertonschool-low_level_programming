#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a node at the beginning of the list
 * @head: pointer to the first node
 * @n: data to add in the nodes
 * Return: adress of the newnode
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;

	*head = newnode;
	return (*head);

}
