#include "dog.h"

/**
 * init_dog - function
 * @d : pointer to struct dog
 * @name: pointer to char
 * @age: input
 * @owner: pointer to char
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
