#include "sort.h"

/**
* swap - swap values
* @x: value one
* @y: value two
*/
void swap(int *x, int *y)
{
	int t;

	t = *x;
	*x = *y;
	*y = t;
}

/**
* part - handle partition
* @array: array
* @low: low
* @high: high
* @size: size array
* Return: index
*/
int part(int *array, int low, int high, size_t size)
{
	int pivot, index_1, index_2;

	pivot = array[high];
	index_1 = low;

	for (index_2 = index_1; index_2 < high; index_2++)
	{
		if (array[index_2] <= pivot)
		{
			if (index_1 != index_2)
			{
				swap(&array[index_1], &array[index_2]);
				print_array(array, size);
			}
			index_1++;
		}
	}
	if (index_1 != high)
	{
		swap(&array[index_1], &array[high]);
		print_array(array, size);
	}
	return (index_1);
}

/**
* helper - sort array
* @array: array to be sorted
* @low: low
* @high: high
* @size: size of array
*/
void helper(int *array, int low, int high, size_t size)
{
	int p = 0;

	if (low < high)
	{
		p = part(array, low, high, size);
		helper(array, low, p - 1, size);
		helper(array, p + 1, high, size);
	}
}

/**
* quick_sort - sort array
* @array: array to be sorted
* @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	helper(array, 0, size - 1, size);
}
