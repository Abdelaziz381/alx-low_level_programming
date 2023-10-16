#include "main.h"
/**
 * swap_int -  swaps the values of two integers.
 * @a , @b : parameters
 * Return nothing
 */

void swap_int(int *a, int *b)
{

int temp = *b;
*b = *a;
*a  = temp;
}
