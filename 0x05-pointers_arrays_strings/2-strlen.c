#include "main.h"

/**
* _strlen-   a function that returns the length of a string.
* @s: string
*
* Return: string length
*/

int _strlen(char *s)
{
	int a, b = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		b++;

	return (b);
}
