#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pointer to function which contain address of other function
 * @a: points to char values
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
