#include "main.h"
/**
 *_memcpy - a function that copies area of memory
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
