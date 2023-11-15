#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main - my nigga
 * Return: ALways (correct)
 *
 */

int main(void)
{
	int num;
	char let;

	for (num = '0'; num <= '9'; num++)
	putchar(num);

	for (let = 'a'; let <= 'f'; let++)
	putchar(let);
	putchar('\n');

	return (0);

}
