#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n:number of "\"
 */
void print_diagonal(int n)
{
	int a, s;

	for (s = 0; s < n; s++)
	{
		for (a = 1; a <= s; a++)
		{
			_putchar('\\');
		}
		_putchar(' ');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
