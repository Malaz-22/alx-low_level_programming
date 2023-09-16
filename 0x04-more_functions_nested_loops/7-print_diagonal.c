#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n:number of "\"
 */
void print_diagonal(int n)
{
	int a, s;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
		{
			for (a = 1; a <= n; a++)
			{
				_putchar('\\');
				if (a != n)
				{
					_putchar('\n');
				}
			}
			if (s != 0)
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
