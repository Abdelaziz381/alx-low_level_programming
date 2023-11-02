#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first pointer to be concatnated
 * @s2: second pointer to be concatnated
 * @n: integer num of bytes
 * Return: if fails return NULL else
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i, j, len_1, len_2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_1 = 0; s1[len_1] != '\0'; len_1++)
		;
	for (len_2 = 0; s2[len_2] != '\0'; len_2++)
		;

	str = malloc(len_1 + n + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);

}
