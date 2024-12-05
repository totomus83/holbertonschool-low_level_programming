#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a node at the beginning of the list
 * @head: double pointer to the start of the list
 * @str: string
 * Return: the adress of head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t length;

	length = 0;
	node = malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	node->str = strdup(str);

	while (str[length])
	{
		length++;
	}
	node->len =  length;
	node->next = *head;
	*head = node;
	return (*head);
}
