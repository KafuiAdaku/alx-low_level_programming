#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int inner;
	int outer;

	for (outer = 0; outer < 10; outer++)
	{
		for (inner = 0; inner < 10; inner++)
		{
			if ((outer < inner) && (outer != inner))
			{
				putchar(outer + '0');
				putchar(inner + '0');
				if ((outer == 8) && (inner == 9))
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
