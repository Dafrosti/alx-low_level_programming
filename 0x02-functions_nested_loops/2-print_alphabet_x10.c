#include "main.h"
/**
* print_alphabet_x10 -  a function that prints the alphabet, x10
* followed by a new line.
*
* Return: 0
*/

void print_alphabet_x10(void)
{
	char alp;
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		for (alp = 'a' ; alp <= 'z' ; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
