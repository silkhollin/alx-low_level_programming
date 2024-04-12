#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in an array of integers
 * +using the binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements / size of an array
 * @value: value to search for
 * Return: The First index where @value is Located or
 *  -1 if the value isn't present in the array or if @array is NULL
 *
 */

int binary_search(int *array, size_t size, int value)
{
	int i, mid, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
