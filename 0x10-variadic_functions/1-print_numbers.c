#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints number then a new line.
 * @separator: pointer to the string to be printed between numbers.
 * @n: The number of ints to be printed by the function.
 * @...: A variable number of numbers to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ints;
	unsigned int i;

	va_start(ints, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ints, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ints);
}
