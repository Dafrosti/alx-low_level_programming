#include <stdio.h>
/**
* main - a program that prints the alphabet in lowercase and uppercase,
*followed by a new line.
*
* Return: 0
*/

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);
	putchar('\n');

	return (0);
}
