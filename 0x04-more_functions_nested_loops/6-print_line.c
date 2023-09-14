#include "main.h"

/**
 * print_line - draws a straight line
 * @n:number of times the character _ should be printed
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
}
