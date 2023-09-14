#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n:number of \
 */
void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('\\');
			if (a != n)
			{
				_putchar(' ');
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
