#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse.
 * @s: String to print.
 *
 * Description: Prints a string in reverse.
 * Return: void.
 */
void print_rev(char *s)
{
	int length = 0;

	while (*(s + length++) != '\0')
	{
	}

	length = length - 2;
	while (length >= 0)
	{
		_putchar(*(s + length--));
	}

	_putchar('\n');
}
