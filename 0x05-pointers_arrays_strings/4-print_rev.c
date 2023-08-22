#include "main.h"

/**
* print_rev-   a function that returns the length of a string.
* @s: string
*
* Return: void
*/

void print_rev(char *s)
{
	int a, b = 0;

	for (a = 0 ; s[a] != '\0' ; a++)
		b++;
	for (a = b - 1 ; a >= 0 ; a--)
		_putchar(s[a]);
	_putchar('\n');
}
