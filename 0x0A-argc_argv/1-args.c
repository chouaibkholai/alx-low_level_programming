#include <stdio.h>
#include "main.h"

/**
 * main - Print number or arguments
 * @argc: Number of argument.
 * @argv: Array of argument.
 * Return: 0 (success).
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
