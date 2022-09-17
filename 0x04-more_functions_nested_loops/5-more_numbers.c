#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 10 times number 0 t0 14
 *
 * Return: no return
 */

void more_numbers(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 10; n1++)
	{
			for (n2 = 0; n2 <= 14; n2++)
			{
				if (n2 > 9)
				{
					_putchar((n2 / 10) + '0');
				}
				_putchar((n2 % 10) + '0');
			}
			_putchar(10);
	}
}
