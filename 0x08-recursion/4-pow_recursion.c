#include "main.h"

/**
 * _pow_recursion - search a string for any set of bytes.
 * @x: base
 * @y: oxposant
 * Return: pointer to the byte in 's' that matches any of bytes in 'string'
 * or NULL if no such byte is found.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x,  y - 1));
}
