#include <stdio.h>
/**
 * main - points all arguments it recieves
 * @argc: number of arguments to the function
 * @argv: arguments vector of pointers to string
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
