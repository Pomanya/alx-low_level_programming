#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @x: function parameter
 *
 * Return: integer
 */

int _abs(int x)
{
	if (x < 0)
		x = -(x);
	else if (x > 0)
		x = x;
	return (x);
}
