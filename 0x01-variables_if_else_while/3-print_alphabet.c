#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char char_1[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52 ; i++)
	{
		putchar(char_1[i]);
	}
	putchar('\n');
	return (0);
}
