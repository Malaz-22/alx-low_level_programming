#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer block of memory to fill
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
