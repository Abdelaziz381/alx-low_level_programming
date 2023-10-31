#include "main.h"

/**
 * c_word - count words numbers in the string
 * @s: string to count
 * Return: int number of words
 */

int c_word(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;

	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pointer to array of strings
 */

char **strtow(char *str)
{
	int i, j, h, len, num = 0, c = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);

	num = c_word(str);
	if (num == 1)
		return (NULL);

	w = (char **)malloc(num * sizeof(char *));
	if (w == NULL)
		return (NULL);

	w[num - 1] = NULL;

	i = 0;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[c] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[c] == NULL)
			{
				for (k = 0; k < c; k++)
					free(w[k]);
				
				free(w[num - 1]);
				free(w);
				return (NULL);
			}
			for (len = 0; len < j; len++)
				w[c][len] = str[i + len];
			w[c][len] = '\0';
			c++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
