#include "main.h"

/**
 * main - Prints _putchar.
 * Return
 */
int main()
{
	char var[10] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(var[i]);
	}
	_putchar(10);
	return (0);
	}
