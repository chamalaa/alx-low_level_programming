#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index
 * @head: first node 
 * @index: index of the node to return
 * Return: pointer to the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int x;

	for (node = head, x = 0; node && x < index; node = node->next, x++);
       return (node);
}       
