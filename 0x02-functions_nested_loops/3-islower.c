#include "main.h"

/**
 * _islower - checks for lower case character
 *@c: character to be checked
 * Return: 1 if result of character is lower case
 * otherwise return = 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
