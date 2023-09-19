include "main.h"


/**
		* _puts - prints a string followed by newline to screen
		* @str: string to be printed
		* Description: prints a string followed by newline to screen
		* Return: void
*/
void _puts(char *str)
{
		int i = 0;

		while (*(str + i) != '\0')
		{
			_putchar(*(str + i++));
		}
		_putchar('\n');

}
