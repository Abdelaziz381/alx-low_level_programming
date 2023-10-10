#include "main.h"

/**
 *print_alphabet - Print alphabet
 *in lowercase
 *Return: no return 0 
 */

void print_alphabet(void)
{
	int var;

	for (var = 'a'; var <= 'z'; var++)
	{
	_putchar (var);
	}
	_putchar (10);
}
