#include "main.h"
/**
* _islower -   a function that checks for lowercase character.
* @c: parameter that checks for lower case
*
* Return: 1 or 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
