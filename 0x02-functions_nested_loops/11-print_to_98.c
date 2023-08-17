#include "main.h"
#include <stdio.h>
/**
* print_to_98 -  a function that prints all natural numbers
* from n to 98, followed by a new line.
* @n: parameter function
*
* Return: void
*/

void print_to_98(int n)
{
	int num;

	if (n >= 0 && n <= 98)
	{
		for (num = n ; num <= 98 ; num++)
		{
			printf("%d", num);
			if (num != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (num = n ; num <= 98 ; num++)
		{
			printf("%d", num);
			if (num != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (num = n ; num >= 98 ; num--)
		{
			printf("%d", num);
			if (num != 98)
				printf(",");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
}
