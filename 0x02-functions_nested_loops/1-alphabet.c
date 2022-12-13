#include "main.h"

/**
 * print_alphabet - write alphapet letter
 *
 * Return: unfound
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
