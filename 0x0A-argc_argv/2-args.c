#include <stdio.h>

/**
 * main - entry point
 * @argc: parameter
 * @argv: parameter
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
