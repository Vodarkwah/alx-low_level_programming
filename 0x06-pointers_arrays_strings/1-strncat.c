#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, loc = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (loc < n)
	{
		*(dest + count) = *(src + loc);
		if (*(src + loc) == '\0')
			break;
		count++;
		loc++;
	}
	return (dest);
}
