#include "main.h"

/**
 * rev_string - Reverses a sting
 * @s: The string to be reveresed
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char temp;

	while (s[i++])
	len++;

	for (i = len - 1; i >= len / 2; i--)
	{
	temp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = temp;
	}
}
