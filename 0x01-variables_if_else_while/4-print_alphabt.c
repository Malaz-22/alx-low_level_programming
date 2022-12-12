#include <stdio.h>

/**
 * main - this basic of program
 *
 * Return: is 0 to be correct
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'e' || a == 'q')
		continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
