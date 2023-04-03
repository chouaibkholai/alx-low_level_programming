#include "main.h"
/**
 * _memset - fill memory with a specific byte
 * @s: starting address of memory to be filled
 * @b: a constant value
 * @n: the max bytes to be changed
 * Return: pointer s (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
