#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints alphabet.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fir, sec, third;

	for (fir = 48; fir < 58; fir++)
	{
		for (sec = 49; sec < 58; sec++)
		{
			for (third = 50; third < 58; third++)
			{
				if (third > sec && sec > fir)
				{
					putchar(fir);
					putchar(sec);
					putchar(third);
					if (fir != 55 || sec != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
