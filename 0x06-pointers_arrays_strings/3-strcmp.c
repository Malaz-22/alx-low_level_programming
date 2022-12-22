#include "main.h"

/**
 * _strcmp - compares two integers
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if s1 = s2 and greater than 0 if s1>s2
 * else s1<s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
		return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
