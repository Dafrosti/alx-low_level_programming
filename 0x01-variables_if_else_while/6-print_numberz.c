#include <stdio.h>
/**
* main -  a program that prints all single digit numbers of base 10
*followed by a new line.
*
* Return: 0
*/
int main(void)
{
	int alp;

	for (alp = 0 ; alp < 10 ; alp++)
		putchar(alp + '0');
	putchar("\n")
	return (0);
}
