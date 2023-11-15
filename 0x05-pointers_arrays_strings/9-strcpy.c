#include "main.h"

/**
 * _strcpy - func  copies the string pointed to by pointer
 * @dest: pointer to destination address
 * @src: pointer to source address
 * Return: pointer to character
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '0';
	return (dest);
}
