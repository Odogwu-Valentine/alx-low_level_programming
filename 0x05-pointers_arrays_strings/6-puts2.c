#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 -  function that prints every other character of a string.
 * @str: String to be printed
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
