#include "sort.h"

/**
 * print_array - print a array
 * @array: parameter array
 * @size: size of array
 *
 * Return: None
 */

void print_array(const int *array, size_t size)
{
	size_t i = 0;

	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
