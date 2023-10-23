#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: a pointer to b
 * @b: the value of the function
 * @n: increment operator
 * Return : type of char pointer *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
