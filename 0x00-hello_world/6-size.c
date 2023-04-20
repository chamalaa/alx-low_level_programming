#include <stdio.h>
/**
 * main - program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char : %i byte(s)", sizeof(char));
	printf("Size of an int : %i byte(s)", sizeof(int));
	printf("Size of a long int : %i byte(s)", sizeof(long int));
	printf("Size of a long long int : %i byte(s)", sizeof(long long int));
	printf("Size of a float : %i byte(s)", sizeof(float));
	return (0);
}
