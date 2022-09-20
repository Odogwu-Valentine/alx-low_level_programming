#include "main.h"
#include <stdio.h>

/**
 *_strlen - function that prints the length of a string
 * @s: the string 
 * Return: the length of th string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
