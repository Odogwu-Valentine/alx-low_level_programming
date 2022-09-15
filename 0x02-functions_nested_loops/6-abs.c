#include "main.h"

/**
 *_abs - finds the absolute value of a number
 *@c: is the int that will use for the argyment of the function
 *Return: 0
 */

int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
