#include "main.h"
/**
 * main - prints lowecase alphabets and a new line
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}

