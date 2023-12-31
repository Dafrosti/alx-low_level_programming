#include "main.h"

/**
* cap_string- a function that capitalizes all words of a string.
* @c: Parameter function
*
* Return: c
*/

char *cap_string(char *c)
{
	int a = 0;

	while (c[a])
	{
		while (!(c[a] >= 'a' && c[a] <= 'z'))
			a++;
		if (c[a - 1] == ' ' ||
				c[a - 1] == '\t' ||
				c[a - 1] == '\n' ||
				c[a - 1] == ',' ||
				c[a - 1] == ';' ||
				c[a - 1] == '.' ||
				c[a - 1] == '!' ||
				c[a - 1] == '?' ||
				c[a - 1] == '"' ||
				c[a - 1] == '(' ||
				c[a - 1] == ')' ||
				c[a - 1] == '{' ||
				c[a - 1] == '}' ||
				a == 0)
			c[a] -= 32;
		a++;
	}
	return (c);
}
