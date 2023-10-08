#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char char_1[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26 ; i++)
	{
		putchar(char_1[i]);
	}
	putchar('\n');
	return (0);
}
