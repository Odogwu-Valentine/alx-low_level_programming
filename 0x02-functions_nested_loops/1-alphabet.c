#include "main.h"

/**
 * print_alphabet - print alphabets in lower case
 * @c: alphabet letter in smaller cases
 * 
 * Return: 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
