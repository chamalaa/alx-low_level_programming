#include "lists.h"

/**
 * listint_len - write a function return all the elemen of linkd lists
 * @h: linked list of type listint_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
