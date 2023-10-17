#include "main.h"
/**
 * print_rev : prints a string, in reverse, followed by a new line.
 *
 * @str : paramter
 * On success: returns string in reverse order followe by new line
 */

void print_rev(char *str)
{
	int len  = _strlen(str) - 1;
	while (len > 0)
	{
		len--;
		_putchar(str[len]);
	}
	_putchar('\n');
}

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */

int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
}
