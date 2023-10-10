#include "main.h"

/**
 * main - function prints text as output
 *
 * main - Prints _putchar.
 * Return : return (0)
 
 */
int main(void)
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
