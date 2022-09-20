#include "main.h"

#include <stdio.h>
/**
 * reset_to_98 - takes an argument and resets the value to 98
 * @n: the argument to be taken by trhe function
 * Return:0
 */

void reset_to_98(int *n)
{
	int *p = *n;
	*p = 98;
	return (0);
}
