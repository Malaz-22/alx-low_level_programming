#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: points to char variable
 * Return: integer value
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
	}
	return (len);
}
