#include "sort.h"
#include <stdio.h>

/**
 * swap - swaps two integers
 * @a: first integer
 * @b: second integer
*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	if (size < 2)
	{
		return;
	}

	size_t i = 0, j;
	int pivot = array[size - 1];

	for (j = 0; j < size - 1; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				swap(&array[i], &array[j]);
				print_array(array, size);
			}
			i++;
		}
	}

	if (i != j)
	{
		swap(&array[i], &array[j]);
		print_array(array, size);
	}

	quick_sort(array, i);
	quick_sort(array + i + 1, size - i - 1);
}
