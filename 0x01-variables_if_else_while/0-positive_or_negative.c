#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 *main - Entry point
 *Description: this will check for the negativity of a random genrated number
 *
 * Return: 0 (success)
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
				if (n > 0)
				{
					printf("%u is positive\n", n);
				}
				else if (n == 0)
				{
					printf("%u is zero\n", n);
				}
				else if (n < 0)
				{
					printf("%u is negative\n", n);
				}
					return (0);

}
