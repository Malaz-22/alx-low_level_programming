#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print until 98
 * @n: number
 * no return value (void)
 */
void print_to_98(int n)
{
	if (n > 0 && n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("\n");
}
