#include "main.h"
#include <stdio.h>

/**
	* _pow - returns the base raised to a certain power
	* @base: number
	* @power: power of base to be raised  to
	* Description: returns the base raised to a certain power
	* Return: int
*/
int _pow(int base, int power)
{
	if (power == 0)
		return (1);
	return (base * _pow(base, power - 1));
}

/**
	* _str_len - returns the length of a string
	* @s: string to get length of
	* Description: returns the length of a string
	* Return: int
*/
int _str_len(const char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + _str_len(&s[1]));
}

/**
	* binary_to_uint - converts a binary number to an unsigned int
	* @b: string containing binary number
	* Description: converts a binary number to an unsigned int
	* Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	int length;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	length = _str_len(b);
	i = length - 1;

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				result += 1 * _pow(2, ((length - 1) - i));
			}
			i--;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
