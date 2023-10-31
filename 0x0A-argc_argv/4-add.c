#include <stdio.h>
#include <stdlib.h>

/**
 * main - program sum two numbers, followed by new line.
 * @argc: int commandline arguments
 * @argv: pointer array of string
 * Return: on sucsses return 0, non-zero return fail
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	char *ch;

	while (--argc)
	{
		for (ch = argv[argc]; *ch; ch++)
			if (*ch < '0' || *ch > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
