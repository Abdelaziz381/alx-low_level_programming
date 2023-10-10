#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints _putchar.
 * Return: Always 0 (Success)
 */
void _putchar(char c) {
  write(1, &c, 1);
}

int main()
	{
	_putchar('_');
	_putchar('p');
	_putchar('u'); 
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
	}
