#include <stdio.h>

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
		putchar(num);
	}
	putchar('\n');
	return (0);
}
