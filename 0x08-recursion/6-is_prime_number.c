#include "main.h"

/**
	* is_prime - wrappe for is_prime_number function
	* @n: number to check if is prime
	* @curNum: current number to check if number is divisible by
	* Description: wrappe for is_prime_number function
	* Return: int
*/
int is_prime(int n, int curNum)
{
	if (n <= 1)
		return (0);
	if (curNum == n)
		return (is_prime(n, curNum + 1));

	if (curNum > n)
		return (1);

	if (n % curNum == 0)
		return (0);

	return (is_prime(n, curNum + 1));
}

/**
	* is_prime_number - checks if a number is prime or composite
	* @n: number to check if prime or not
	* Description: checks if a number is prime or composite
	* Return: int
*/
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
