#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of straight lines expected
 * Return: Always success
 */

void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int i = 0;

	for (i = 1; i <= n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}	
