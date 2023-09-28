#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: number which will get factorial
 * Return: -1 If n is lower than 0 otherwise return factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
