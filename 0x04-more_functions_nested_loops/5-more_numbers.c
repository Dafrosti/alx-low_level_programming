#include "main.h"

/**
* more_numbers-  a function that prints 10 times the numbers,
* from 0 to 14, followed by a new line.
*
* Return: void
*/

void more_numbers(void)
{
	int num, alp;

	for (num = 0 ; num < 10 ; num++)
	{
		for (alp = 0 ; alp <= 14 ; alp++)
		{
			if (alp > 9)
				_putchar(alp / 10 + '0');
			_putchar(alp % 10 + '0');
		}
		_putchar('\n');
	}
}
