#include "3-calc.h"

/**
 * op_add - adding
 * @a: int
 * @b: int
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: int
 * @b: int
 * Return: subtraction result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: int
 * @b: int
 * Return: multiplication Result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divition
 * @a: int
 * @b: int
 * Return: divition Result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulous
 * @a: int
 * @b: int
 * Return: modulous Result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
