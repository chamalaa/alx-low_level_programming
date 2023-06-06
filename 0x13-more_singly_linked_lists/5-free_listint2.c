#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointr to 1er node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *x;

	if (!head)
		return;
	*node = *head;
	while (node)
	{
		x = node;
		node = node->next;
		free(x);
	}
	*head = NULL;
}
