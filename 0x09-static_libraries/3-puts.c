#include "main.h"

/**
* _puts-   a function that returns the length of a string.
* @str: string
*
* Return: void
*/

void _puts(char *str)
{
	int a;

	for (a = 0 ; str[a] != '\0' ; a++)
		_putchar(str[a]);
	_putchar('\n');
}
