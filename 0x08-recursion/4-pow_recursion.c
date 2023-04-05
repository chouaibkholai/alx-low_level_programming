#include "main.h"

/**
 * _pow_recursion - returns the value of X raised to the power of Y.
 * @x: The value to raise.
 * @y: The power.
 * Return: result of the power.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
