#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: parameter function
 * @s2: parameter function
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int i, j, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	c = malloc(sizeof(char) * (i + j + 1));

	if (c == NULL)
	{
		free(c);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		c[k] = s1[k];

	limit = j;
	for (j = 0; j <= limit; k++, j++)
		c[k] = s2[j];

	return (c);
}
