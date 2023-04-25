#include <stdio.h>
/**
 * print_to_98 - a function that prints all natural numbers from n to 98
 *
 *@n: input
 */
void print_to_98(int n)
{
	int resul;

	if (n > 98)
		for (resul = n; n > 98; resul--)
			printf("%d, ", resul);
	{
		break;
	}
	else
		for (resul = n; n < 98; resul++)
			printf("%d, ", resul);
	printf("98\n");
}
