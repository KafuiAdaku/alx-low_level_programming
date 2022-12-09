#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	a = 'a';
	
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	return (0);
}
