#include "main.h"
/**
 * _strlen - return the length of a string.
 * @s : paramter
 * Return : length
 */

int _strlen(char *s)
{
	int count = 0;
	int inc = 0;

	while (s[count] != '\0')
	{
		inc++;
		count++;
	}
return inc;
}
