#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: the destinattion string
 * @src: the source string
 * @n:  max bytes to be used from src
 * Return: a pointer t the returning string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dlen;

	for (dlen = 0; dest[dlen] != '\0'; dlen++)
	{

	}
	for (i = 0; src[i] && i < n; i++)
	{
	dest[dlen + i] = src[i];
	}
	return (dest);
}
