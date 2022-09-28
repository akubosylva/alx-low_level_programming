#include "main.h"

/**
 * _pow_recursion - raises x to power y
 * @x: number
 * @y: power
 * Return: power of n, -1 if y less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));
}
