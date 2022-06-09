#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int i, n, oper;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (n = 1; n <= 9; n++)
		{
			op = i * n;
			_putchar(44);
			_putchar(32);
			if (oper <= 9)
			{
				_putchar(32);
				_putchar(oper + 48);
			}
			else
			{
				_putchar((oper / 10) + 48);
				_putchar((oper % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
