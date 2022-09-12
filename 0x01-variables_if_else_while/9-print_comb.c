#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: Prints all possible combination of digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int d;

	for (d = '0' ; d <= '9' ; d++)
	{
		putchar(d);

		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

