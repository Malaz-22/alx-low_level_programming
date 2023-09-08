#include <stdio.h>

/**
 * main - rntry point
 * Return: 0 to be correct
 */
int main(void)
{
	printf("Size of a char: %lu", sizeof(char));
	printf("Size of an int: %lu", sizeof(int));
	printf("Size of a long int: %lu", sizeof(long int));
	printf("Size of a long long int: %lu", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu", sizeof(float));
	return (0);
}
