#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
