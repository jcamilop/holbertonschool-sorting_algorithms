#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array
 * @size: size of array
 *
 * Return: 0
 */

void selection_sort(int *array, size_t size)
{
	int t, index;
	size_t i, j;

	if (array == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
			{
				index = j;
			}
		}
		if (array[index] < array[i])
		{
			t = array[index];
			array[index] = array[i];
			array[i] = t;
			print_array(array, size);
		}
	}
}
