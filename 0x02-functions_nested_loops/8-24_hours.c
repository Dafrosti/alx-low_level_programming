#include "main.h"
/**
* jack_bauer - a function that prints all the minutes in a day.
*
* Return: void
*/

void jack_bauer(void)
{
	int num, alp;

	for (num = 0 ; num < 24 ; num++)
	{
		for (alp = 0 ; alp < 60 ; alp++)
		{
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			_putchar(':');
			_putchar(alp / 10 + '0');
			_putchar(alp % 10 + '0');
			_putchar('\n');
		}
	}
}
