#include "main.h"
#include <stdio.h>

/**
* _strcpy-   a function that copies the string pointed to by src
* of integers, followed by a new line.
* @dest: parameter function
* @src: parameter function
*
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0 ; src[a] != '\0' ; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
