#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: point to char
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 != 0)
	{
		for (i = ((i - 1) / 2) + 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	if (i % 2 == 0)
	{
		for (i = (i / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
