#include <stdio.h>

/**
* main- find first 50 fibonacci numbers
*
* Return: 0
*/

int main(void)
{
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long cal;
	int num;

	printf("%lu, ", num1);
	for (num = 1 ; num < 50 ; num++)
	{
		printf("%lu", num2);
		cal = num1 + num2;
		num1 = num2;
		num2 = cal;
		if (num != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
