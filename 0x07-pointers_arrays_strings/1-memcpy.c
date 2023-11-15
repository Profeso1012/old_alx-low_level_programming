#include "main.h"

/**
 * _memcpy - Entey point
 * @dest: pointer to destination array
 * @src: byte of constant
 * @n: bytes
 * Return: always 0(success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
