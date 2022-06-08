#include "main.h"
/**
 * main - prints lowecase alphabets and a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 123; i++)
	{
		_putchar(i);
		return (0);
	}
	putchar('\n');
}

