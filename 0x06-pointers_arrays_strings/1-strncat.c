#include "main.h"

/**
* _strncat-  a function that concatenates two strings.
* @dest: parameter function
* @src: parameter function
* @n: parameter function
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest), a;

	for (a = 0 ; a < n && *src != '\0' ; a++)
	{
		dest[len + a] = *src;
		src++;
	}
	dest[len + a] = '\0';
	return (dest);
}
