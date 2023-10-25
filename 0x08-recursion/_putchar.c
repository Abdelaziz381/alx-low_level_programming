#include <unistd.h>

/**
 * _putchar - writes the charcter c to stdout
 * @c: printed charcter
 * Return: on success
 * On error, -1 is returned, and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
