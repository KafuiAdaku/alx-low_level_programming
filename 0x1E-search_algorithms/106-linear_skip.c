#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to be search
 * @value: the value to search for
 * Return: pointer on the first node where `value` is located
 *		If `value` is not present in list or if head is `NULL`,
 *		your function must return `NULL`
 * You can assume that list will be sorted in ascending order
 * Every time you compare a value in the list to the value you are searching,
 *		you have to print this value
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *start, *stop;

	start = stop = list;

	if (list == NULL)
		return (NULL);

	while (start && start->express && start->express->n < value)
	{
		printf("Value checked at index [%lu} = [%d]\n",
				start->express->index, start->express->n);
		start = start->express;
	}
	stop = start;
	while (stop && stop->next != stop->express)
		stop = stop->next;

	if (start->express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				start->express->index, start->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
				start->index, start->express->index);
	}
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
				start->index, stop->index);

	while (start != stop && start->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);
		start = start->next;
	}
	printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);

	if (start == stop)
		return (NULL);

	return (start);
}
