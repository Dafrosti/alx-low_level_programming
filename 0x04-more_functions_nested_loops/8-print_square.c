#include "main.h"

/**
* print_square-   a function that draws a square
*@size: parameter function
*
* Return: void
*/

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int num, alp;

		for (num = 1 ; num <= size ; num++)
		{
			for (alp = 1 ; alp <= size ; alp++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
