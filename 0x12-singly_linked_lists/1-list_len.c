#include "lists.h"
/**
 * list_len -  function that returns the number of elements in a linked 
 * @h: pointerof the first node
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++
	}
	return (x);
}
