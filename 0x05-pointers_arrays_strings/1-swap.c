#include "main.h"
/**
 * swap_int -  swaps the values of two integers.
 * @a : paramter
 * @b : paramter
 * Return nothing
 */

void swap_int(int *a, int *b)
{

int temp = *b;
*b = *a;
*a  = temp;
}
