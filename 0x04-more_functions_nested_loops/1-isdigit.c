#include "main.h"

/**
 * _isdigit - checks if an argument is a digit
 * @c: The argument ot be checked for
 * Return: 1 if the check is successful
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
