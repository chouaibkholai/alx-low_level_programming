#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
		return (0);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == 0)
		return (0);

	for (i = 0; min <= max; i++)
		p[i] = min++;

	return (p);
}
