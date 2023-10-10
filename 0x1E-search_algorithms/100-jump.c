#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 *					using the Jump search algorithm
 * @array: pointer to the first element of the array to be searched.
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the first index where value is located
 *			if `value` is not present in `array` or `array` is NULL, return `-1`
 * You can assume that array will be sorted in ascending order
 * You have to use the square root of the size of the array as the jump step.
 * You can use the `sqrt()` function included in `<math.h>`
 *		(don’t forget to compile with -lm)
 * Every time you compare a value in the array to the value you are searching
 *		for, you have to print this value
 */

int jump_search(int *array, size_t size, int value)
{
	int *arr_cp = array;
	int step = sqrt((int)size);
	int start = 0;
	int end = 0;

	if (arr_cp == NULL || size == 0)
		return (-1);

	/**Find the block where the element is, if it is present in the array**/
	while (end < (int)size && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n", end, arr_cp[end]);
		start = end;
		end += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", start, end);

	while (start <= _min(end, (int)size - 1))
	{
		printf("Value checked array[%d] = [%d]\n", start, arr_cp[start]);
		if (arr_cp[start] == value)
			return (start);

		start++;
	}

	return (-1);
}

/**
 * _min - finds the lesser of two integers
 * @a: first integer
 * @b: second integer
 * Return: lesser of the two integers
 */

int _min(int a, int b)
{

	return (a < b ? a : b);
}
