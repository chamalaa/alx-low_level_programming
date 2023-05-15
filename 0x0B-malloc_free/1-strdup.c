#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *n;
	int i, s = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	n  = malloc(sizeof(char) * (i + 1));

	if (n == NULL)
		return (NULL);

	for (s = 0; str[s]; s++)
		n[s] = str[s];

	return (n);
}

