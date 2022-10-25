#include "lists.h"

/**
* add_node - adds a new node at the end of a lists
* @str: string to assig the node
* @head: pointer to the head of the linked list
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new node

	if head == NULL
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new node == NULL)
		return (NULL);
	new node->str = strdup(str);
	new node->len = strlen(str);
	new node->next = NULL;
	return (new node);

	if (*head == NULL)
	{
		*head = new node;
		return (new node);
	}
}
