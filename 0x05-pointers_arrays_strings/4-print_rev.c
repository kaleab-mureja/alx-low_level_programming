#include "main.h"
#include <stdio.h>

/**
 * 	* print_rev - prints a string in reverse
 * 		* @s: string to print
 * 			* Description: prints a string in reverse
 * 				* Return: void
 * 				*/
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
