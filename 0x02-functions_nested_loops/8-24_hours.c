#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	for (j = 0; j <= 59; j++)
	{
		for (i = 0; i <= 23; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
		}
		_putchar(j / 10);
		_putchar(j % 10);
	}
}
