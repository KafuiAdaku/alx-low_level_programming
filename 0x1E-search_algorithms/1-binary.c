#include "search_algos.h"


/**
 * binary_search - searches for a value in a sorted array of integers
 *					using the Binary search algorithm
 * @array: pointer to the first element in the array to be searched
 * @size: number of elements in the array
 * @value: the value to be searched for
 * Return: the index where the value is located
 *			If `value` is not present in the `array` or `array` is `NULL`,
 *			your function must return `-1`
 * You can assume the `array` will be sorted in ascending order
 * Your can assume the `value` won't appear more than once in the `array`
 * You must print the array being searched every time it changes.
 */

int binary_search(int *array, size_t size, int value)
{
	int low, up, mid;
	int *arr_cp = array;

	low = 0;
	up = (int)size - 1;


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
