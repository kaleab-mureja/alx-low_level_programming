#include "main.h"
#include <stdio.h>

/**
	* _puts_recursion - prints a string followed by a new line
	* @s: string to print
	* Description: prints a string followed by a new line
	* Return: void
*/
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(&s[1]);
	}

}
