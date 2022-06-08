#include "main.h"
	return (0);

/**
 * print_alphabet_x10 - prints lowecase alphabets and a new line
 *
 * Return: Always 0 (success)
 */

void print_alphabet_x10(void);
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

