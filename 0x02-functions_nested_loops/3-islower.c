#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c:character will be checked by ascii
 * Return: 1 if c lower case, 0 for otherwise
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
