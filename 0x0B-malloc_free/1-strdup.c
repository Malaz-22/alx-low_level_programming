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

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	str = malloc(sizeof(*str) * i);
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
