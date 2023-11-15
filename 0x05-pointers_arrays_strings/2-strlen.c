#include <stdio.h>

/**
 * _strlen - Returns the length of a string
 * @s: The string to find its length
 * Return: The length of @str
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
