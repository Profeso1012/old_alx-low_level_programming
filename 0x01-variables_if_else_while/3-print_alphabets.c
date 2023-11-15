#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always (Success)
 *
 */

int main(void)
{
	char bet;

	for (bet = 'a'; bet <= 'z'; bet++)
		putchar(bet);
	for (bet = 'A'; bet <= 'Z'; bet++)
		putchar(bet);
	putchar('\n');

	return (0);

}
