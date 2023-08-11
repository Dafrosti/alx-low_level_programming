#include <stdio.h>
/**
* main -  a program that prints all single digit numbers of base 10
*followed by a new line.
*
* Return: 0
*/
int main(void)
{
	int number;

	for (number = 0; number < 10 ; number++)
		putchar((number % 10) + '0');
	putchar('\n');
	return (0);
}
