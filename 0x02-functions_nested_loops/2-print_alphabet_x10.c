#include "main.h"

/**
 * print_alphabet_x10 - print alpabet 10 times
 *
 * Return: not found
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (a = 'a'; a <= 'z'; a++)
	{
	i = 0;
	while (i < 10)
	{
	_putchar(a);
	i++;
	}
	_putchar('\n');
	}
}
