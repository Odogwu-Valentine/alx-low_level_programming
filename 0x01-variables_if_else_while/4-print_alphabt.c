#include <stdio.h>

/**
 * main - Entry point
 * Descrition: print all aphabets except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
