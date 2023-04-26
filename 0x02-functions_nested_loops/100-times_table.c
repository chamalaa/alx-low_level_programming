#include "main.h"
/**
 * print_times_table - a function that prints
 * the n times table, starting with 0.
 *
 * @n:input
 */
void print_times_table(int n)
{
	int resul, num, mult;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');

				resul = num * mult;
				if (resul <= 9)
					_putchar(' ');
				if (resul <= 99)
					_putchar(' ');
				if (resul >= 100)
				{
					_putchar((resul / 100) + 48);
					_putchar((resul / 10) % 10 + 48);
				}
				else if (resul <= 99 && resul >= 10)
					_putchar((resul / 10) + 48);
				_putchar((resul % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
