#include <stdio.h>

/**
 * main - Entry point
 * Description: Printing alphabets in all cases
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int A;
	int a;

	for (a = 97 ; a <= 122 ; a++)
	{
		putchar(a);
	}
		for (A = 65 ; A <= 90 ; A++)
		{
			putchar(A);
		}
putchar('\n');
return (0);
}
