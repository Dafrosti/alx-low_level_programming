#include "main.h"

/**
* _strcat-   a function that copies the string pointed to by src
* of integers, followed by a new line.
* @dest: parameter function
* @src: parameter function
*
* Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0, a;

	for (a = 0 ; dest[a] != '\0' ; a++)
		len1++;
	for (a = 0 ; src[a] != '\0' ; a++)
		len2++;
	for (a = 0 ; a <= len2 ; a++)
		dest[len1 + a] = src[a];
	return (dest);
}
