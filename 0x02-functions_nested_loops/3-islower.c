#include "main.h"

/**
 * _islower -  checks for lowercase character
 * @c: character will be checked by ascii
 * Return: 1 if c lower case, 0 for otherwise
 */
int _islower(int c)
{
	int a;

	for(a = 97; a <= 122; a++)
	if (c == a)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
