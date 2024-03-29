#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory by using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
