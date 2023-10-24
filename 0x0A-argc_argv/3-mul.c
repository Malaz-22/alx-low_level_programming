#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of strings
 * Return: 0 to be correct
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;

	result = n1 * n2;
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
