#include "main.h"

/**
 * print_alphabet - Print alphabet
 * in lowercase
 * Return: no return 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int var;
	while (i++ <= 9)
	{
		for (var = 'a'; var <= 'z'; var++)
			_putchar(var);

		_putchar(10);
	}
}
