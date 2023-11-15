#include "main.h"

/**
 * print_sign - check the code.
 * @n: value to be checked
 * Return: if positve 1, if negative -1 else 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
