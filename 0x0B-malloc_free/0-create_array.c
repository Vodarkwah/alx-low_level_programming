#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: size of the array.
 * @c: stored char
 *
 * Return: pointer of an array of chars. NULL if
 * size = 0, or failure.
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (ch);
}
