#include <stdio.h>

/**
* print_times_table -   a function that computes and prints the sum
* of all the multiples of 3 or 5
*
* Return: 0
*/

int main(void)
{
	int cal = 0;
	int num;

	for (num = 0 ; num < 1024 ; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
			cal = cal + num;
	}
	printf("%d\n", cal);
	return (0);
}
