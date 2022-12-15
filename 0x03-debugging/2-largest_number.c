#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
		printf("a is the largest number\n");
	}
	else if (b > a && a > c)
	{
		largest = b;
		printf("b is the largest number\n");
	}
	else
	{
		largest = c;
		printf("c is the largest number\n");
	}

	return (largest);
}
