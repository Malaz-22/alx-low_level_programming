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
		x = j * i;
		for (j = 0; j <= 9; j++)
		{
			_putchar(x + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (x < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
