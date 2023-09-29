#include "main.h"

/**
 * _strlen_recursion -  returns the length of a string
 * @s: the string
 * Return: iength
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] != '\0')
	{
		return (s[i]);
		return (_strlen_recursion(s + 1));
	}
	return (0);
}
