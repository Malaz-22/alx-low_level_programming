#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c:character to be checked
 * Return: 1 for alphapetic , 0 for other
 */
int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
