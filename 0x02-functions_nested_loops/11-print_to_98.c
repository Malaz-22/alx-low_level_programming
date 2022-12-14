#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print until 98
 * @n: number
 * Return: no return value (void)
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
