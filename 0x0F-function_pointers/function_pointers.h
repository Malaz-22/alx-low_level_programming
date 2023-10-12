#ifndef FUN_POINTERS_H
#define FUN_POINTERS_H
#include <stddef.h>

int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
