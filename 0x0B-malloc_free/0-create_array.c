#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);
	unsigned int i;

	if (size == 0 || x  == 0)
		return (0);

	for (i = 0; i < size; i++)
		x[i] = c;
	return (x);
}
