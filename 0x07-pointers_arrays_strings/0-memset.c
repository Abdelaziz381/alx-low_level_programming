#include "main.h"

/**
 * _memcpy - a function that fills memory with a constant byte
 * @s: pointer to source memory area
 * @b: pointer to destination memory area
 * @n: number of bytes
 *
 * Return: a pointer to endval.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
