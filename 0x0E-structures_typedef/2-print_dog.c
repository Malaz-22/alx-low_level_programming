#include "dog.h"

/**
 * print_dog - function
 * @d: input
 * Return: void.
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		char *name;
		char *owner;
		float age;

		name = (*d).name;
		owner = (*d).owner;
		age = (*d).age;

		if ((*d).name == NULL)
			name = "(nil)";
		if ((*d).owner == NULL)
			owner = "(nil)";
		printf("Name: %s\n", name);
		printf("Age: %f\n", age);
		printf("Owner: %s\n", owner);
	}
}
