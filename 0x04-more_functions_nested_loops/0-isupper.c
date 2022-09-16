#include "main.h"

/**
 * _isupper - function to checkif an argyment is upper case
 * @c: the argument or char character to be checked
 * Return: 1 if uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
