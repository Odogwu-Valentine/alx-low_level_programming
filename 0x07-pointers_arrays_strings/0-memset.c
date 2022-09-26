#include "main.h"

/**
 * _memset - function that fills a memory with constant byte
 * @s: memory variables
 * @b: constant to fills with
 * @n: number of bytes
 * Return: pointer to the memory block
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
