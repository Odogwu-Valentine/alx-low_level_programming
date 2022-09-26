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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
