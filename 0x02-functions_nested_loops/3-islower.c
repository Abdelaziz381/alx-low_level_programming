#include "main.h"

/**
 * _islower : checks if a character is
 * in lowercase
 * @var: character to be checked
 * Return: no return 0
 */

int _islower(int var)
{
	if (var >= 'a' && var <= 'z')
	return (1);

	return (0);
}
