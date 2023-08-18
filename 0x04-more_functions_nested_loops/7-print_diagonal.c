#include "main.h"

/**
* print_diagonal-   a function that draws a diagonal line
*@n: parameter function
*
* Return: void
*/

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int num, alp;

		for (num = 1 ; num <= n ; num++)
		{
			for (alp = 0 ; alp <= num ; alp++)
				_putchar(' ');
			_putchar('\\');
		_putchar('\n');
		}
	}
}
