#include "main.h"

/**
 * malloc_checked - allocates memory using
 * @b: int
 * Return : if succsess return a pointer to allocated memory
 * on fail termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
