#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s : string
 * Rerurn: length of the string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}		
