#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, loc = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (loc >= 0)
	{
		*(dest + count) = *(src + loc);
		if (*(src + loc) == '\0')
			break;
		count++;
		loc++;
	}
	return (dest);
}
