#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: no thing
 * @n:number will be start from
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a <= 98; a++)
		{
			printf("%d", a);
		}
	}
	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			_putchar(a + '0');
		}
	}
	if (n == 98)
	{
		_putchar(n);
	}
	_putchar(',');
	_putchar(' ');
	_putchar('\n');
}
