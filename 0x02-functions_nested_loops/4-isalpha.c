#include "main.h"

/**
 * _isalpha - function that checks for alpha characters
 *@c: is the int that will be used fir the argument of the funtion
 * Return: 1 (success)
 */
int _isalpha(int c)
{
	int c;

	for ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
