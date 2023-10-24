#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of args
 * @argv: array of strings
 * Return: 0 to be correct
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int count;

	if (argc)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%d\n", count);
		}
	}
	return (0);
}
