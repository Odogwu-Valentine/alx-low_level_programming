#include <stdio.h>
/**
 * main - prints the name of the program when ran
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to string
 *
 * Return: always 0 if succesful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
