#include "search_algos.h"

/**
 * exponential_search -  searches for a value in a sorted array
 *				of integers using the Exponential search algorithm
 * @array: pointer to the first element of the array to be search
 * @size: is the number of elements in `array`
 * @value: the value to be search for
 * Return: the first index where `value` is located
 * You can assume that `array` will be sorted in ascending order
 * If value is not present in `array` or if `array` is `NULL`,
 *	your function must return `-1`
 * You have to use powers of 2 as exponential ranges to search in your array
 * Every time you compare a value in the array to the value you are
 *	searching for, you have to print this value
 * Once you’ve found the good range, you need to use a binary search:
 *	Every time you split the array, you have to print the new array
 *	(or subarray) you’re searching in.
 */

int exponential_search(int *array, size_t size, int value)
{
		size_t index, left, right;

		if (array == NULL || size == 0)
			return (-1);

		index = 1;
		while (index < size && array[index] <= value)
		{
			printf("Value checked array[%lu] = [%d]\n", index, array[index]);
			index *= 2;
		}

		/* check if index exceeds bounds of array */
		left = index / 2;
		right = index;
		if (index >= size)
		{
			right = size - 1;
		}
		printf("Value found between indexes[%lu] and [%lu]\n", left, right);

		return (bin_search(array, left, _min(right, size - 1), value));
}

/**
 * bin_search - searches for a value in a sorted array of integers
 *					using the Binary search algorithm
 * @array: pointer to the first element in the array to be searched
 * @left: lower bound of `array`
 * @right: upper bound of `array`
 * @value: the value to be searched for
 * Return: the index where the value is located
 *			If `value` is not present in the `array` or `array` is `NULL`,
 *			your function must return `-1`
 * You can assume the `array` will be sorted in ascending order
 * Your can assume the `value` won't appear more than once in the `array`
 * You must print the array being searched every time it changes.
 */

int bin_search(int *array, int left, int right, int value)
{
	int low, up, mid;
	int *arr_cp = array;

	low = left;
	up = right;


	if (arr_cp == NULL)
		return  (-1);

	while (low <= up)
	{
		/**print array searched**/
		prt_arr(arr_cp, (size_t)low, (size_t)up);
		mid = (low + up) / 2;
		if (value < array[mid])
			up = mid - 1;
		else if (value > array[mid])
			low = mid + 1;
		else
			return (mid);
	}
	return (-1);
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
