#include "main.h"

/**
 *reverse_array - function that reverse the content of an array
 *@a: array
 *@n: number of element of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
