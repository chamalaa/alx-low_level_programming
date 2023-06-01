#include "lists.h"
/**
 * add_node - a function adds a new node at the beginning of a linked list
 * @head: double pointe
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (!head || !new)
		return (NULL);
	if (str)
	{
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		new->len = _strlen(new->str);
	}

	new->next = *head;
	*head = new;
	return (new);
}
