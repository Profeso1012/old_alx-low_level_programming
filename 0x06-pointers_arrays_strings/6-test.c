#include "main.h"

/**
 * *cap_string - Capitalizes all words of a string and implements \n and \t'
 * @str: Array to be modified
 * Return: Pointer to modified array
 */

char *cap_string(char *str)
{
	int i = 0;
	int slen = 0;
	char tmp;

	while (str[i++])
		slen++;

	for (i = 0; i < slen; i++)
	{
		if (str[i] == ' ' || '.')
		{
			tmp = str [i+1];
			if (tmp >= 'a' && tmp <= 'z')
				_putchar(tmp - 32);
			else
				continue;
		}
		if (str[i] == '\\')
		{
			if (str[i + 1] == 'n')
				_putchar('\n');
			if (str[i + 1] == 't')
				_putchar('\t');
		}
	}
	return (str);
}


