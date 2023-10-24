#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of args
 * @argv: array of strings
 * Return: 0 to be correct
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
