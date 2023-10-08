#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char char_1 ,char_2 = '\n';
	for (char_1 = 'a'; char_1 <= 'z' ; char_1++)
	{
		putchar(char_1);
		putchar(char_2);
	}
	return (0);
}
