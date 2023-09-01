#include "main.h"

/**
 * *_memset - a function that fills memory with a constant byte.
 * @s: parameter function
 * @b: parameter function
 * @n: parameter function
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	 int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
