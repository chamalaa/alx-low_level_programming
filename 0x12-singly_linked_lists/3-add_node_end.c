#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of a linked list
 * @head: double pointer
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !newnode)
		return (NULL);
	if (str)
	{
		newnode->str = strdup(str);
		if (!newnode->str)
		{
			free(newnode);
			return (NULL);
		}
		newnode->len = _strlen(newnode->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = newnode;
	}
	else
		*head = newnode;
	return (newnode);
}
