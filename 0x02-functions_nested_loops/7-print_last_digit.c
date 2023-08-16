#include "main.h"
/**
* print_last_digit - a function that prints the last digit of a number.
* @num: parameter function
*
* Return: alp
*/

int print_last_digit(int num)
{
	int alp;

	alp = num % 10;
	if (num < 0)
		alp = -alp;
	_putchar(alp + '0');
	return (alp);
}
