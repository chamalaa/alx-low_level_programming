#include "lists.h"

/**
 * sum_listint - the sum of all the data in a listint_t list
 * @head: pointer to first node
 * Return: resulting of sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *x = head;

	while (x)
	{
		s += x->n;
		x = x->next;
	}

	return (s);
}
