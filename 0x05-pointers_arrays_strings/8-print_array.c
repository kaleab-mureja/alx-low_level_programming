nclude "main.h"
#include <stdio.h>

/**
 * 	* print_array - prints all numbers in an array
 * 		* @a: array of integers
 * 			* @n: upto which index to print numbers
 * 				* Description: prints all numbers in an array
 * 					* Return: void
 * 					*/
void print_array(int *a, int n)
{
		int i = 0;

			while (i < n)
					{
								printf("%i", *(a + i++));
										if (i != n)
													{
																	printf(", ");
																			}
											}
				printf("\n");

}
