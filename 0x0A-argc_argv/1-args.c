#include <stdio.h>

/**
 * main - prints the number of arguments passed into it, followed by new line.
 * @argc: int
 * @argv: array of string
 * Return: on sucsses return 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
