#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * Return: last digit
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (n < 0)
	{
		_putchar(-l);
		return (-1);
	}
	_putchar(l);
	return (l);
}
