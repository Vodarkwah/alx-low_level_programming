#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the newly allocated space in memory.
 * if malloc fails, return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strCon;
	unsigned int ls1, ls2, lsout, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	lsout = ls1 + n;

	strCon = malloc(lsout + 1);

	if (strCon == NULL)
		return (NULL);

	for (i = 0; i < lsout; i++)
		if (i < ls1)
			strCon[i] = s1[i];
		else
			strCon[i] = s2[i - ls1];

	strCon[i] = '\0';

	return (strCon);
}
