#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of itself
 * @argc: number of arguments iin main
 * @argv: list of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int byte, itr;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;

	for (itr = 0; itr < byte; itr++)
	{
		if (itr == byte - 1)
		{
			printf("%02hhx\n", ptr[itr]);
			break;
		}
		printf("%02hhx ", ptr[itr]);
	}
	return (0);
}
