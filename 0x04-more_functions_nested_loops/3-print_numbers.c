#include "main.h"

/**
 * print_numbers - print the number from 0 to 9
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num ++)
	{
		_putchar(num);
	}
	_putchar('\n');
	return (0);
}
