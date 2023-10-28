#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two numbers, followed by new line.
 * @argc: int commandline arguments
 * @argv: pointer array of string
 * Return: on sucsses return 0, non-zero return fail
 */

int main(int argc, char *argv[])
{
	int multi;

	if (argc == 3)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
