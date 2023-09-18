#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = c;
	*a = *b;
	*b = c;
}
