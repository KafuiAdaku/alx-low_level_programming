#include "main.h"
/**
 * main - Entry point
 * Description: Program that prints _putchar, followed by a newline
 * Return: Always 0 (Success)
 */
int main(void)
{
char outpt[] = "_putchar\n";
int i = 0

while (outpt != '\n')
{
	_putchar(outpt);
	i++;
}
return (0);
}
