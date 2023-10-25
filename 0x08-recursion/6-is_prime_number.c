#include "main.h"

/**
 * check_prime - checks to see if number is prime
 * @x: int
 * @y: int
 * Return:int
 */
int check_prime(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check_prime(x + 1, y));
}

/**
 * is_prime_number - states if number is prime
 * @n:int
 * Return:int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
