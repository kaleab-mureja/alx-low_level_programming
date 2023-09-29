#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
	* _sqrt - returns the square root of a number
	* @n: number to get square root of
	* @current: current number to check
	* Description: returns the square root of a number
	* Return: int
*/

int _sqrt(int n, int current)
{
	if (current > n)
		return (-1);
	if (current * current == n)
		return (current);

	return (_sqrt(n, current + 1));
}

/**
	* _sqrt_recursion - returns natural square root of a number
	* @n: Number to give the square root of
	* Description: returns natural square root of a number
	* Return: int
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
