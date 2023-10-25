#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 to be correct
 */
int main(int argc, char *argv[])
{
	int result;

	result = atoi((argv[argc - 1])) * atoi((argv[argc - 2]));
	if (argc == 3)
	{
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
