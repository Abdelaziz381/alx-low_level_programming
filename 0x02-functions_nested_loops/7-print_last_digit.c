#include "main.h"

/**
 * print_last_digit - function that print last digit of a number
 * @n: character to be targeted
 * Return: return 0
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n *= -1;

	_putchar (n + '0');
	return (n);
}

