#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry Point
 * Result: Always (Success)
 *
 */

int main(void)
{
	int p, w;

	for (p = 0; p <= 98; p++)
	{
	for (w = p + 1; w <= 99; w++)
	{
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	putchar(' ');
	putchar((w / 10) + '0');
	putchar((w % 10) + '0');
	if (p == 98 && w == 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');

	return (0);

}
