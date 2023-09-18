nclude "main.h"

/**
 * 	* puts_half - prints second half of a string
 * 		* @str: string
 * 			* Description: prints second half of a string
 * 				* Return: void
 * 				*/
void puts_half(char *str)
{
		int length = 0;
			int half = 0;

				while (*(str + length) != '\0')
						{
									length++;
										}

					if (length % 2 == 0)
							{
										half = length / 2;
											}
						else
								{
											half = (length / 2) + 1;
												}

							while (half <= length - 1)
									{
												_putchar(*(str + half++));
													}
								_putchar('\n');
}
