#include "main.h"
/**
 * _strcat - Function that concatenates two strings.
 * @dest: This is the first array containing string
 * @src: this is the second array.
 * Return: return a pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
