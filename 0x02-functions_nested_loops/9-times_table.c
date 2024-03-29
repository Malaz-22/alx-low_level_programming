#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i <= 9; i++)
	{
		_putchar(0 + '0');
		_putchar(',');
		for (j = 1; j <= 9; j++)
		{
			x = j * i;
			if (x < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			if (x >= 10)
			{
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
