#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum integer.
 * @max: maximum integer.
 * Return: NULL if min is greater than max,
 *	   NULL if malloc fails,
 *	   otherwise return pointer to newly allocated memory.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int n, ctr, j;

	j = min;
	n = max - min + 1; /*difference with boundaries inclusive*/
	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * n);
	if (ptr == NULL)
		return (NULL);
	for (ctr = 0; ctr < n; ctr++)
	{
		*(ptr + ctr) = j++;
	}
	return (ptr);
}
