#include "search_algos.h"

/**
 * interpolation_search - Search a value in a sorted array using interpolation
 * @array: Array of ordered ints
 * @size: Size of array
 * @value: Value to search
 *
 * Return: Index of the value
 * -1 if the value is not in the array or if array == NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, size_sa, low, high;

	if (!array)
		return (-1);

	size_sa = size;
	low = 0;
	high = size - 1;

	while (size_sa > 1)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
								 * (value - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
		size_sa = high - low;
	}

	if (size_sa == 1 && array[pos] == value)
		return (pos);

	return (-1);
}
