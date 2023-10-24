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

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%d\n", count);
		}
	}
	else
		(argc = 1);
	return (0);
}
