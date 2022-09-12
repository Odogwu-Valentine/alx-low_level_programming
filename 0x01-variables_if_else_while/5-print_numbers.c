#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: prints the digitd in base 10
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%u", num);
	}
	printf("\n");
	return (0);
}
