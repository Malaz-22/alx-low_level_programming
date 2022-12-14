#include "main.h"

/**
 * print_sign - test the sign of number
 * @n: number we will signed
 * Return: 1 if n positive
 * Return; -1 if n negative
 * otherwise return 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
