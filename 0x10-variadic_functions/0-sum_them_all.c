#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - computes the sum of all its paramters.
 * @n: The number of paramters
 * @...: A variable number of paramters to be summed
 *
 * Return: sum of parameters or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
