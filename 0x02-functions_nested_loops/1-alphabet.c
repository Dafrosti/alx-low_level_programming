#include "main.h"
/**
* print_alphabet -  a function that prints the alphabet, in lowercase,
* followed by a new line.
*
* Return: 0
*/

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);

	_putchar('\n');
}
