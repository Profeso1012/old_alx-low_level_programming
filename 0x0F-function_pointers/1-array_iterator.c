#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints all elements of am array on a new line
 * @array: array to be used
 * @size: number of elements to print
 * @action: pointer to print in regular or hex
 * Return: empty
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

