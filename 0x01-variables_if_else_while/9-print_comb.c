#include <stdio.h>
/**
* main -  a program that prints all possible combinations of single-digit
* number seperated by a comma
*
* Return: 0
*/
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
