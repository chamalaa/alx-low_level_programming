#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * examplz table
 */
void times_table(void)
{
	int num, mult, resul;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			resul = num * mult;
			if (resul <= 9)
				_putchar(' ');
			else
			{	_putchar((resul / 10) + 48);
				_putchar((resul % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
