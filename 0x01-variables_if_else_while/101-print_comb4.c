#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, p;

	for (d = '0'; d < '9'; d++)
	{
		for (p = d + 1; p <= '9'; p++)
		{
			for (o = p + 1; o <= '9'; o++)
			{
				if (p != d && p != o)
				{
					putchar(d);
					putchar(p);
					putchar(o);
					if (d == '7' && p == '8' && o == '9')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
