#include "main.h"

/**
 * _isalpha - check for letters
 * @c: checked to know letter or not
 * Return: 1 if c is letter
 * otherwise return 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
