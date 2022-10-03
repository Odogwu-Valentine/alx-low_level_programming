#include "main.h"
#include <stdio.h>
/**
 * whatsmyname - prints th name of the program when ran
 * @argc: count of all arguments
 * @argv: arguments inputted or used by the function at the tie of running
 *
 * Return: always 0 if succesful
 */
char whatsmyname(int argc, char *argv[])
{
	printf("%s\n", argv[2]);
	return (0);
}
