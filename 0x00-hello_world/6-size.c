#include <stdio.h>
/**
 * main - program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char : %i bytes", sizeof(char));
	printf("Size of an int : %i bytes", sizeof(int));
	printf("Size of a long int : %i bytes", sizeof(int));
	printf("Size of a long long int : %i bytes", sizeof(int));
	printf("Size of a float : %i bytes", sizeof(float));
	return (0);
}
