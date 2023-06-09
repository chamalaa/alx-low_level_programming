#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, sum = 0;
	unsigned long int c;
	unsigned long int ex = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		c = ex >> x;
		if (c & 1)
			sum++;
	}

	return (sum);
}
