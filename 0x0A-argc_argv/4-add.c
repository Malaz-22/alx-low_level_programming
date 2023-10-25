#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * Return: 0 in correct, 1 in case one of number not digit
 * @argc: number of argument
 * @argv: array of strings
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int count;

	if (argc < 2)
	{
		printf("0\n");
	}
	if (argc >= 3)
	{
		for (count = 1; count < argc; count++)
		{
			if ((*argv[count] >= 'a' && *argv[count] <= 'z') ||
					(*argv[count] >= 'A' && *argv[count] <= 'Z'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[count]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
