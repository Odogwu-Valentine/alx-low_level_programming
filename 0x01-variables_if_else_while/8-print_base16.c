#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - Entry point
 * Description- print base 10 in hexadecimal
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;
	int alpha;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alpha = 97; alpha <= 102; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
