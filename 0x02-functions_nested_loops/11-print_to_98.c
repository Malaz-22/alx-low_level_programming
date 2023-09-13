#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * Return: no thing
 * @n:number will be start from
 */
void print_to_98(int n)
{
	int a;

	if (n < 98)
	{
		for (a = n; a < 98; a++)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
