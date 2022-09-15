#include "main.h"

/**
 * main -Entry point
 * Description: printing alphabet in lower case
 * Return: ALways 0 (success)
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
