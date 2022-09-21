#include "main.h"
/**
 * _strcat - Function that concatenates two strings.
 * @dest: This is the first array containing string
 * @src: this is the second array.
 * Return: return a pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		for (j = 0; src[j] != '\0'; j++, i++)
		{
			dest[i] = src[j];
		}
	dest[i] = '\0';
	return (dest);
}
