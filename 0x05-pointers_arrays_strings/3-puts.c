#include "main.h"
#include <stdio.h>
/**
 * _puts - this prints a string followed b a new line
 * @str: this is the string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
