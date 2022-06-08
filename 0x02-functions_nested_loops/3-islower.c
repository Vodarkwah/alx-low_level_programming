#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows 0
 *
 * @c: The characte number in ASCII
 *
 * Return: 1 for lowercase character. 0 for other cases
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
