#include "main.h"

/**
 * print_square - prints a square
 * @size:size of square
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
