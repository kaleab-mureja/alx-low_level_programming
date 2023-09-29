#include "main.h"

/**
	* _pow_recursion - give the value of a number raised to a power
	* @x: base number
	* @y: power x to be raised to
	* Description: give the value of a number raised to a power
	* Return: int
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
