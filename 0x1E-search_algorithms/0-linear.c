#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers using
 *                  the Linear search algorithm
 * @array: pointer to the first element of the array to be searched
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: The first index where the value is located if found.
 *          if `value` is not present in array or if `array` is `NULL`,
 *          your function must return `-1`.
 */

int linear_search(int *array, size_t size, int value)
{
	int *arr_cp = array;
	int index = 0;

	if (array == NULL)
		return (-1);

	for (; index < (int)size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, arr_cp[index]);
		if (arr_cp[index] == value)
			return (index);
	}

	return (-1);
}
