#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */


int **alloc_grid(int width, int height)
{
	int **ar, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	ar = (int **)malloc(sizeof(int *) * height);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = (int *)malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ar[i][j] = 0;

	return (ar);
}
