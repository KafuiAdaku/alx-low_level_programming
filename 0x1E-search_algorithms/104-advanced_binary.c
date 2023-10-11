#include "search_algos.h"

/**
 * advanced_binary - searches for the very first occurance of a value
 *	in a sorted array of integers
 * @array: pointer to the first element of the array to be search
 * @size: the number of elements on `array`
 * @value: value to search for
 * Return: index where `value` is located
 * You can assume that `array` will be sorted in asending order
 * If value is not present in `array` or if `array` is `NULL`,
 *	your function must return `-1`
 * Every time you split the array, you have to print the new array
 *	(or subarray) you’re searching in
 * You have to use recursion. You may only use one loop
 *	(while, for, do while, etc.) in order to print the array
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}

	return (adbin_search(array, 0, size - 1, value));
}

/**
 * adbin_search - utility function to search for a value in a sorted array
 * @array: the array to be searched
 * @left: lower bound of `array`
 * @right: upper bound of `array`
 * @value: value to be searched for
 * Return: index of the value searched for
 */

int adbin_search(int *array, size_t left, size_t right, int value)
{
	size_t mid = (left + right) / 2;

	if (array == NULL || left > right)
		return (-1); /*Value not found in the subarray*/

	/*Print sub array*/
	prt_arr(array, left, right);

	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return ((int) mid);
		else
			return (adbin_search(array, left, mid, value));
	}
	else if (array[mid] < value)
		return (adbin_search(array, mid + 1, right, value));
	else
		return (adbin_search(array, left, mid - 1, value));
}


/**
 * prt_arr - prints the elements of an integer array
 * @array: pointer to the first element of the array to be printed
 * @start: where to start printing array from
 * @end: index to stop printing array
 * Return: Nothing
 */
void prt_arr(int *array, size_t start, size_t end)
{
	int index;

	if (array == NULL)
		return;

	printf("Searching in array: ");
	for (index = (int)start; index <= (int)end; index++)
	{
		if (index != (int)start)
			printf(", ");
		printf("%d", array[index]);
	}
	printf("\n");
}
