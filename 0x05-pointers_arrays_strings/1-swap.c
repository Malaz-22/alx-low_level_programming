#include "main.h"

/**
 * swap_int - swaps the values of integers.
 * @a: name of pointer
 * @b: name of pointer
 * Return: int value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
