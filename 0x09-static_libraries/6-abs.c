#include "main.h"
/**
* _abs -  a function that computes the absolute value of an integer.
* @a: parameter function
*
* Return: -a, a or 0
*/

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
