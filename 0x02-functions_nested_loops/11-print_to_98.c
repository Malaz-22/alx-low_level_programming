#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print until 98
 * @n: number
 * no return value (void)
 */
void print_to_98(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
		printf("\n");
	}
}
