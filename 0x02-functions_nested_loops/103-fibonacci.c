#include <stdio.h>

/**
* main- find the fibonacci sequence
*
* Return: 0
*/

int main(void)
{
	int top = 4000000, num1 = 1, num2 = 2;
	int alp, cal = 2;

	while (alp <= top)
	{
		alp = num1 + num2;
		if (alp % 2 == 0)
			cal = cal + alp;
		num1 = num2;
		num2 = alp;
	}
	printf("%d\n", cal);
	return (0);
}
