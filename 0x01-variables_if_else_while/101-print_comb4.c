#include <stdio.h>

/**
 * main - Entry point
 * Description: print three possible digits
 * Return: Always 0 (success)
 */

int main(void)
{
	int c, i, k;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (c < i && i < k)
				{
					putchar(c);
					putchar(i);
					putchar(k);
					if
						(c != '7')
						{
							putchar(',');
							putchar(' ');
						}
					else;
				}
				else;
			}
		}
		putchar('\n');
		return (0);
	}
}
