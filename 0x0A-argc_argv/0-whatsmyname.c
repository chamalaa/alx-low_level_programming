#include <stdio.h>
/**
 * main -  program that prints its name, followed by a new line.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc , char const *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
