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
 * selection_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int temp;
	size_t j, i, min_pos;

	for (i = 0; i < size - 1; i++)
	{
		min_pos = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_pos])
			{
				min_pos = j;
			}
		}

		if (min_pos != i)
		{
			temp = array[i];
			array[i] = array[min_pos];
			array[min_pos] = temp;

			print_array(array, size);
		}
	}
}
