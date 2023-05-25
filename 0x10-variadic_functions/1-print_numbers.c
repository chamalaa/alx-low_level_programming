#include "variadic_functions.h"

/**
 * print_numbers -  a function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: th integer to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list i;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start (i, n);
	while (i--)
		printf("%d%s", va_arg(i, int),
				i ? (separator ? separator : "") : "\n");
	va_end(i);
}
