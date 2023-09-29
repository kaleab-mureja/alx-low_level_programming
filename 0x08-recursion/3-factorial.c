#include "main.h"

/**
	* factorial - returns the factorial of a number
	* @n: number to get the factorial of
	* Description: returns the factorial of a number
	* Return: int
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 2)
		return (n);

	return (n * factorial(n - 1));
}
