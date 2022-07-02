#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: number of characters of the string
 *
 */

void puts_half(char *str)
{
	int len, i;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len += 1;
	if (len % 2 == 1)
	{
		for (i = (len - 1) / 2; i < (len); i++)
			_putchar(str[i]);
		_putchar('\0');
	}
	else
	{
		for (i = (len) / 2; i < (len); i++)
			_putchar(str[i]);
		_puchar('\0');
	}
	_putchar('\n');
}






