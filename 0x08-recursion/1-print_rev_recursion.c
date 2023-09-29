#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string
 *
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
