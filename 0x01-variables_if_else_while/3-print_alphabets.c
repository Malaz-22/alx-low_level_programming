#include <stdio.h>
/**
 * main - body of program
 * here begin excuite code
 * Return: 0 to be correct
 */
int main(void)
{
	char a;
	char A;

	for (a = 'a'; a <= 'z'; a++)
	{
	putchar(a);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
	putchar(A);
	}
	putchar('\n');
	return (0);
}
