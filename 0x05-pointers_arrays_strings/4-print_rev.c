#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - write a function that prints a string in reverse
 * @s: the string input to be printed in reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
	int i = strlen(s);

	while (i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
