#include "main.h"

/**
* print_times_table -  a function that prints the n times table,
* starting with 0.
* @n: parameter function
*
* Return: void
*/

void print_times_table(int n)
{
	int num, alp, cal;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (alp = 1; alp <= n; alp++)
			{
				_putchar(',');
				_putchar(' ');

				cal = num * alp;

				if (cal <= 99)
					_putchar(' ');
				if (cal <= 9)
					_putchar(' ');

				if (cal >= 100)
				{
					_putchar((cal / 100) + '0');
					_putchar(((cal / 10)) % 10 + '0');
				}
				else if (cal <= 99 && cal >= 10)
				{
					_putchar((cal / 10) + '0');
				}
				_putchar((cal % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
