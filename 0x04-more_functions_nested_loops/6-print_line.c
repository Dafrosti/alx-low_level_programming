#include "main.h"

/**
* print_line-   a function that draws a straight line
*@n: parameter function
*
* Return: void
*/

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int num;

		for (num = 1 ; num <= n ; num++)
			_putchar('_');
		_putchar('\n');
	}
}
