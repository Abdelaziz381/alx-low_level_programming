#include "main.h"
/**
 * print_rev : prints a string, in reverse, followed by a new line.
 *
 * @str : paramter
 * On success: returns string in reverse order followe by new line
 */

void print_rev(char *str)
{
	int a = _strlen(str)+1;
	while (a != 0)
	{
		a--;
		_putchar(str[a]);
	}
}

