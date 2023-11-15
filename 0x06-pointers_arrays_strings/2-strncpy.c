#include "main.h"

/**
 * _strncpy - function that copies n bytes of characters from a string
 * @dest: string storing copy
 * @src: source string
 * @n: number of bytes to be copies from source
 * Retrun: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
