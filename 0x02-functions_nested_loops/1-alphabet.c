#include "main.h"

/**
 * main -Entry point
 * Description: printing alphabet in lower case
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
