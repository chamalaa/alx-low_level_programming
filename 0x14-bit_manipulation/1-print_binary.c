#include "main.h"

/**
 * print_binary - the binary equivalent of a decimal number
 * @n: number in binary
 */
void print_binary(unsigned long int n)
{
	int x, sum = 0;
	unsigned long int c;

	for (x = 63; x >= 0; x--)
	{
		c = n >> x;

		if (c & 1)
		{
			_putchar('1');
			sum++;
		}
		else if (sum)
			_putchar('0');
	}
	if (!sum)
		_putchar('0');
}
