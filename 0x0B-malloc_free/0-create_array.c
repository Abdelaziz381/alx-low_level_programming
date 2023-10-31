#include "main.h"

/**
 * *create_array - array of chars
 * @size: unsigned int positive number
 * @c: the charcter used to initlized
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array_of_chars = malloc(size * sizeof(char));
	unsigned int i;

	if (array_of_chars == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array_of_chars[size] = c;
	}
	return (array_of_chars);
}
