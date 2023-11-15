#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: Pointer to the first string to be compared.
 * @s2: Pointer to the second string to be compared.
 * Return: (0) soup and chicken
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int b = 0;

	for (i = 0; s1[i] != '\0' && b == 0; i++)
	{
		b = s1[i] - s2[i];
	}

	return (b);

}
