#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first str
 * @s2: second str
 * Return: int comparison result
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (s1[i] == s2[j])
	{
		return (0);
	}
	return (s1[i] - s2[j]);
	return (s2[j] - s1[i]);
}
