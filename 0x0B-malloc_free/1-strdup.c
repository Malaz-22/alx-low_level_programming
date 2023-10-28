#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;

	ptr = str;

	for (i = 0; ptr[i] != '\0'; i++)
	{
	}
	ptr = malloc(sizeof(*str) * i);
	if (str == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
