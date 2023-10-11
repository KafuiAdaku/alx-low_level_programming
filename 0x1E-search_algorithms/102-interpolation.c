#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *							using the Interpolation search algorithm
 * @array: pointer to the first element of the array to be searched
 * @size: the number of elements in `array`
 * @value: the value to be searched for
 * Return: the first index where `value` is located
 * You can assuem the array will be sorted in ascending order
 * If value is not present in `array` or if `array` is `NULL`,
 *	your function must return `-1`
 * To determine the probe position, you can use :
 *	```size_t pos = low + (((double)(high - low) / (array[high] - array[low]))
 *	* (value - array[low]))```
 * Every time you compare a value in the array to the value you are searching,
 *	you have to print this value.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
					(value - array[low]));
	while ((array[low] != array[high]) && (value >= array[low]) &&
			(value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (value < array[pos])
			high = pos - 1;
		else if (value > array[pos])
			low = pos + 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
