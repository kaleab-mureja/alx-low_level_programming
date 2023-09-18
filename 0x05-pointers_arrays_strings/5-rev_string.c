nclude "main.h"
#include <stdio.h>

/**
 * 	* swap - swap two values of a string
 * 		* @s: string
 * 			* @index1: first index to be swapped
 * 				* @index2: second index to be swapped
 * 					* Description: swap two values of string
 * 						* Return: void
 * 						*/

void swap(char *s, int index1, int index2)
{
		char tmp = *(s + index2);
			*(s + index2) = *(s + index1);
				*(s + index1) = tmp;
}

/**
 * 	* rev_string - reverse given string
 * 		* @s: string to be reversed
 * 			* Description: reverse given string
 * 				* Return: void
 * 				*/
void rev_string(char *s)
{
		int leftPointer = 0;
			int rightPointer = -1;

				while (*(s + ++rightPointer) != '\0')
						{

								}
					rightPointer--;

						while (leftPointer <= rightPointer)
								{
											swap(s, leftPointer++, rightPointer--);
												}
}
