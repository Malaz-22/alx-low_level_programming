#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: num of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum;
	va_list nptr;

	sum = 0;
	if (n == 0)
		return (0);

	va_start(nptr, n);

	for (x = 0; x < n; x++)
	{
		sum = sum + va_arg(nptr, const unsigned int);
	}
		return (sum);
	va_end(nptr);
}
