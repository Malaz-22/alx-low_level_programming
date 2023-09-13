#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n:number
 */
int _abs(int n)
{
	if (n < 0)
	{
		_putchar(-n);
		return (-n);
	}
	else
	{
		_putchar(n);
		return (n);
	}
}
