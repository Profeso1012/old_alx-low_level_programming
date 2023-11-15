#include "main.h"

/**
 * _memset - Entey point
 * @s: pointer to destination array
 * @b: byte of constant
 * @n: bytes
 * Return: always 0(success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
