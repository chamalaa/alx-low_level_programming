#include "lists.h"
/**
 * _strlen - length of str
 * @s: the srting
 * Return: length of str
 */
int _strlen(char *s)
{
	int x = 0;

	if (!s)
		return (0);
	while (*s++)
		x++;
	return (x);
}

/**
 * print_list -  function that prints all the elements of a list_t
 * @h: pointer of first data
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
