#include "main.h"
/**
 * _strcmp - compares two strings
 * @str_1: first string.
 * @str_2: second string.
 * Return: 0 if str_1 == str_2,
 * another number if not equal.
 */

int _strcmp(char *str_1, char *str_2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(str_1 + i) == '\0') && (*(str_2 + i) == '\0'))
			break;
		op = *(str_1 + i) - *(str_2 + i);
		i++;
	}

	return (op);
}
