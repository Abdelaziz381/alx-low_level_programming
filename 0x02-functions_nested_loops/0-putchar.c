#include "main.h"

/**
 * main - Prints _putchar.
 * Return : return (0)
 * File:main.h
 * Desc:header file containing functions declaration
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
