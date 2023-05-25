#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (x--)
		printf("%s%s", (str = (va_arg(ap, char *)) ? str : "(nil)",
					x ? (separator ? separator : "") : "\n");
				va_end(ap);
}
