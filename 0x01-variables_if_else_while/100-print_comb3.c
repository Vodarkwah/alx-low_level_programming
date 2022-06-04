#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, r;

	for (l = 48;  r <= 78; l++)
	{
	for (r = l + 1 ; r <= 78; r++)
	{
		putchar(r);
		putchar(l);

		if ((l == 50) && (r == 78))
		{
			break;
		}

		putchar(',');
		putchar(' ');

	}
	}
	putchar('\n');
	return (0);
}








