#include "main.h"
/**
 * sqtRecursive - computes square root recursively doing binary search
 * @start: initial number
 * @end: last number withing the limit of number
 * @m: given number
 * Return: 1 if square root is not found, else return square root.
 */
int sqtRecursive(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
		{
			return (mid);
		}
/*after library search */
		if (mid * mid > m)
		{
			return (sqtRecursive(start, mid - 1, m));
		}
		if (mid * mid < m)
		{
			return (sqtRecursive(mid + 1, end, m));
		}
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqtRecursive(2, n, n));
}
