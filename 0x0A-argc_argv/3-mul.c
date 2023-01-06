#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that multiplies two numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointer to the arguments.
 * Return: 1 if the programs doesn't received two arguments, else 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);

	return (0);
}
