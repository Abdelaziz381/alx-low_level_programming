#include "function_pointers.h"

/**
 * array_iterator - maps an array through a function pointer
 * @array: int array
 * @size: array size
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end_of_ar = array + size -1;

	if (array && size && action)
	{
		while (array <= end_of_ar)
		{
			action(*array++);
		}
	}
}
