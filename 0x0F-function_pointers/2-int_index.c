#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: the int index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array && size && cmp)
		while (x < size)
		{
			if (cmp(array[x]))
				return (x);
			x++;
		}
	return (-1);
}
