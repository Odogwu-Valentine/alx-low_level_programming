#include "main.h"
/**
 * _sqrt_recursion - returns the natural aquare rot of a number
 * @n: number to be used
 *
 * Return: the vsquare rot of n
 */
int _sqrt_recursion(int n)
{
	if (n ==1 || n == 0)
		return (n);
	return (_sqrt (0, n));
}
/**
 * _:wq
 * sqrt - returns the sqaure rot of a number
 * @n: test number
 * @x: sqaure number
 *
 * Return: the square root of n
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt (n + 1, x));
}
