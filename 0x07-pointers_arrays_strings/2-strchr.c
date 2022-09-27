#include "main.h"
/**
 * _strchr - locates a string in a character
 * @s: the string to check for c
 * @c: the character to find
 *
 * Return: pointer to the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + 1); i++)
	{
		if (*(s + 1) == c)
			return (s + 1);
	}
	if (*(s + 1) == c)
		return (s + i);
	return (0);
}
