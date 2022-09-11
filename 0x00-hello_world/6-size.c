#include <stdio.h>

/**
 * main - Entry point
 * Description- C program that prints the size of various types on the computer
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of an int: %zu bytes(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %zu bytes(s)\n", (unsigned long)sizeof(float));
	return (0);
}
