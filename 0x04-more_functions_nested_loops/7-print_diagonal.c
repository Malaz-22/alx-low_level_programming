#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n:number of "\"
 */
void print_diagonal(int n)
{
	int j, i;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(32);
		}
			_putchar(92);
			_putchar('\n');
	}
		if (n <= 0)
		{
			_putchar('\n');
		}
}
