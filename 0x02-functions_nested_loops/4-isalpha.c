#include "main.h"

/**
 * _isalpha - checks if a character is in alphabetical
 * @c: character to be checked
 * Return: return 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);

	return (0);
}
