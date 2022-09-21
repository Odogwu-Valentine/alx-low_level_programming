#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half - a function that prints half of a string
 *@str: string argument to be taken
 */

void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar('\n');
}
/**
 * _strlen - prints the length of a string
 * @s: string
 * Return: returns the length of th string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
