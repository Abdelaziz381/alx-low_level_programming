#include "main.h"

/**
 * _memcpy - a function that fills memory with a constant byte
 * @bgn: pointer to source memory area
 * @endval: pointer to destination memory area
 * @num: number of bytes
 *
 * Return: a pointer to endval.
 */
char *_memcpy(char *endval, char *bgn, unsigned int num)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (a < n)
	{
		*(endval + i) = *(bgn + j);
		i += 1;
		j += 1;
	}
	return (endval);
}
