#include "main.h"

/**
 * *_memcpy - a function that fills memory with a constant byte.
 * @dest: parameter function
 * @src: parameter function
 * @n: parameter function
 *
 * Return: s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
