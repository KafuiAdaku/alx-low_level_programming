#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int inner;
	int mid;
	int outer;

	for (outer = 0; outer < 10; outer++)
	{
		for (mid = 0; mid < 10; mid++)
		{
			for (inner = 0; inner < 10; inner++)
			{
				if ((outer < mid) && (mid < inner))
				{
					putchar(outer + '0');
					putchar(mid + '0');
					putchar(inner + '0');
					if (outer != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
