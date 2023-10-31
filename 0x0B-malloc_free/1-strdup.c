#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *cp;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	cp = (char *)malloc((sizeof(char) * len) + 1);
	if (cp == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		cp[i] = str[i];
	cp[len] = '\0';

	return (cp);
}
