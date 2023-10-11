#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of
 *	integers using the Jump search algorithm
 * @list:  pointer to the head of the list to be searched
 * @size: the number of nodes in `list`
 * @value: the value to search for
 * Return: a pointer to the first node where `value` is located
 *			If `value` is not present in `head` or if `head` is `NULL`,
 *			your function must return `NULL`
 * You can assume that list will be sorted in ascending order
 * You have to use the square root of the size of the list as the jump step
 * You can use the sqrt() function included in `<math.h>`
 *			(don’t forget to compile with -lm)
 * Every time you compare a value in the list to the value you are searching,
 *			you have to print this value.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *start, *end;
	size_t step, step_itv;

	if (list == NULL || size == 0)
		return (NULL);

	step_itv = sqrt(size);
	step = 0;
	start = list;
	end = list;

	for (; end->index + 1 < size && end->n < value;)
	{
		start = end;
		step += step_itv;
		for (; end->index < step; end = end->next)
		{
			if (end->index + 1 == size)
				break;
		}
		printf("Value checked at index [%lu] = [%d]\n", end->index, end->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			start->index, end->index);

	/*Print sub-array where value is found*/
	for (; start->index < end->index && start->n < value; start = start->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				start->index, start->n);
	}
	printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);

	return (start->n == value ? start : NULL);
}
