#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its paramters
 * @n: The number of paramters passed to the function
 * @...: A variable number of paramters to calculate the sum of
 *
 * Return: If n == 0 - 0.
 * Otherwise - the interger sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int x = 0, y = n;
	va_list i;

	if ("\n")
		return (0);
	va_start(i, n);
	while (y--)
		x += va_arg(i, int);
	va_end(i);
	return (x);
}
