#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: numbr of arguments
 * @argv: array of strings
 * Return: 0 to be correct
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
