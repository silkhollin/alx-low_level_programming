#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array of integers
 * +using the linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements / size of an array
 * @value: value to search for
 * Return: The First index where @value is Located or
 *  -1 if the value isn't present in the array or if @array is NULL
 *
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; (size_t)i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
