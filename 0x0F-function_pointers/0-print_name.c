#include "function_pointers.h"
/**
 * print_name - prints the name
 * @name: strinf to be printed
 * @f: printing function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
