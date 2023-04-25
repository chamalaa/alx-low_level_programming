#include "main.h"
/**
 * _islower - checks for lowercase character.
 *
 * @c : the character in ASCII table
 * Return: 1 for the lowercase character , 0 fot the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

