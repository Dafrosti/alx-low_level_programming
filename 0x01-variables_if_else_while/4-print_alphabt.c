#include <stdio.h>
/**
* main -  a program that prints the alphabet in lowercase,
*followed by a new line.
*
* Return: 0
*/
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		if (alp != 'q' && alp != 'e')
			putchar(alp);
	putchar('\n');

	return (0);
}
