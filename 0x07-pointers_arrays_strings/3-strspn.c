#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: input
 * @accept: bytes
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;
	
	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != s[x]; y++)
		{
			if (accept[y] == '\0')
				return (x);
		}
	}
	return (0);
}
