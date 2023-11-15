#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - takes a pointer to function and prints the name
 * and prints thwe name in its argument
 * @name: pointer to string
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
