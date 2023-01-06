#include <stdio.h>
/**
 * main - Prints all the arguments it receives.
 * @argc: Prints the number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
