#include "lists.h"

void _tortue(void) __attribute__ ((constructor));

/**
 * _tortue - prints a sentence before the main
 * function is executed
 */
void _tortue(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
