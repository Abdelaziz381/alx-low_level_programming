#include "main.h"

/**
*  _strcmp - Function which compare two strings and
*	@s1: first string
*	@s2:second string
*Return:
*	returns zero if s1 == s2
*	returns negative number if s1 < s2
*	returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int inc = 0, diff = 0;

	while (1)
	{
		if (s1[inc] == '\0' && s2[inc] == '\0')
			break;
		else if (s1[inc] == '\0')
		{
			diff = s2[inc];
			break;
		}
		else if (s2[inc] == '\0')
		{
			diff = s1[inc];
			break;
		}
		else if (s1[inc] != s2[inc])
		{
			diff = s1[inc] - s2[inc];
			break;
		}
		else
			inc++;

	}
	return (diff);
}
