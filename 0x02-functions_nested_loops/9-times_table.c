#include "main.h"
#include <stdio.h>
/**
* times_table - a function that prints the 9 times table,
* starting with 0.
*
* Return: void
*/

void times_table(void)
{
	int num, alp, cal;

	for (num = 0 ; num < 10 ; num++)
	{
		for (alp = 0 ; alp < 10 ; alp++)
		{
			cal = num * alp;
			if (alp == 0)
				printf("%d, ", cal);
			else
			{
				printf("%2d", cal);
				if (alp != 9)
					printf(", ");
			}
		}
		printf("\n");
	}
}
