#include <stdio.h>

/**
 * main - body of program
 *
 * Return: 0 to be correct
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
