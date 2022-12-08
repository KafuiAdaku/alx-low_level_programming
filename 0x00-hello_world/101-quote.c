#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char msg[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; i < strlen(msg); i++)
	{
		putchar(msg[i]);
	}

	putchar('\n');
	return (1);
}
