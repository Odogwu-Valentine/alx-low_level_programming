#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints all numbers except 2 and 4
 * Returns: return nothing
 */

void print_most_numbers(void)
{
	int n;
	for (n = 48; n < 58; n++)
	{
		if (n == 50 || n == 52)
		{
			continue;
		}
		_putchar(n);
	}
	_putchar(10);
}
