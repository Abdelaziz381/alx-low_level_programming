#include "3-calc.h"

/**
 * main - checker
 * @argc: arg numbers
 * @argv: arg vector
 * Return: always 0;
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
