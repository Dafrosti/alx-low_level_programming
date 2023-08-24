#include "main.h"

/**
* leet- a function that encodes a string into 1337.
* @c: Parameter function
*
* Return: c
*/

char *leet(char *c)
{
	int a, b;
	char *e = "aAeEoOtTlL";
	char *f = "4433007711";

	for (a = 0 ; c[a] != '\0' ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			if (c[a] == e[b])
				c[a] = f[b];
		}
	}
	return (c);
}
