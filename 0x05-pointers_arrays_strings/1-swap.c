#include "main.h"
#include <stdio.h>

/**
 * swap_int - this function takes two arguments and swaps them
 *@b: this is the first argment taken
 *@a: this isnthe second argument
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}

