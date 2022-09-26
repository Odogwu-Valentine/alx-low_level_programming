#include "main.h"

/**
 * _memcpy -  function that copies memory area
 * @dest: destination of string copied
 * @src: source of copied memory
 * @n: number of bytes to copy
 *
 * Return: pointer to the dest file
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char tmp;

	for (tmp = 0; tmp < n; tmp++)
	{
		tmp = src[n - 1];
		dest = tmp;
	}
	return (dest);
}
