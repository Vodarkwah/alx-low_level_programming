#include <stdio.h>

/**
 * main - Prints number combinations
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
		putchar(l);
		putchar(r);

		if ((l == 56) && (r == 78))
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








