#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: the number
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
	{
		last = last * -1;
	}
		_putchar(last + '0');
		return (last);
}
