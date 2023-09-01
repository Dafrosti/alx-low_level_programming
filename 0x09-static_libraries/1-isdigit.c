#include "main.h"

/**
* _isdigit- a function that checks for a digit (0 through 9).
*@c: parameter function
*
* Return: 1(success) or 0 (failure)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
