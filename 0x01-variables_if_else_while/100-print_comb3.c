#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fir, sec;

	for (fir = 48; fir <= 56; fir++)
	{
		for (sec = 49; sec <= 57; sec++)
		{
			if (sec > fir)
			{
				putchar(fir);
				putchar(sec);
				if (fir != 56 || sec != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
