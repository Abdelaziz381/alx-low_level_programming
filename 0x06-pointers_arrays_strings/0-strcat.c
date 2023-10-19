#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string pointed to by @dest
 *
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src) 
{
	int n = 0;

	while (dest[n])
		n++;

	for (int n2 = 0; src[n2]; n2++)
		dest[n++] = src[n2];

	return dest;
}
