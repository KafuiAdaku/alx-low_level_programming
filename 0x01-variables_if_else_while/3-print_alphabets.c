#include <stdio.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int A;
	a = 'a';
	A = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
