#include "main.h"

/**
 * _strspn - gets the lenght of a prefix subtring
 *@s: string to check
 *@accept: string to chec against
 *
 *Return: numbver of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if s[i] == accept[j]
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
			return
