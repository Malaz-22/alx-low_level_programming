#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number
 * @y: the power raised to x
 * Return: -1 if y is lower than 0,otherwise return x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * (x ^ (y - 1)));
}
