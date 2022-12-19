#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elememnts of an array followed by a new line
 * @a: pointer to variable array integer
 * @n: integer variable denoting number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
