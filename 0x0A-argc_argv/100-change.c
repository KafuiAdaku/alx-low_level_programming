#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimal number of coins for change
 *	  using values of 25, 10, 5, 2, and 1 cent.
 * @argc: The number of arguments supplied to the program.
 * @argv: A array of pointers of typed char to the arguments.
 * Return: 1 if number of arguments is not exactly 1, else  0.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
