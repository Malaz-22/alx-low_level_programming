#include <stdio.h>

/**
 * main - prints name of program
 * Return: 0 to be correct
 * @argc: number of arguments
 * @argv: array of strings
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int n = 0;

	printf("argv[%d] = %s\n", n, argv[0]);
	return (0);
}
