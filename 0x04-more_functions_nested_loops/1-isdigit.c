#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * Return: 1 if c is a digit, otherwisr 0
 * @c:which check it
 */
int _isdigit(int c)
{
	if (c >= 1 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
