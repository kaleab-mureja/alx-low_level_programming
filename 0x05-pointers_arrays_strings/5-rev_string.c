#include "main.h"
#include <stdio.h>

/**
		* swap - Swaps two characters in a string.
		* @s: String.
		* @index1: First index to be swapped.
		* @index2: Second index to be swapped.
		*
		* Description: Swaps two characters in a string.
		* Return: void.
 */
void swap(char *s, int index1, int index2)
{
	char tmp = *(s + index2);
	*(s + index2) = *(s + index1);
	*(s + index1) = tmp;
}

/**
		* rev_string - Reverses a given string.
		* @s: String to be reversed.
		*
		* Description: Reverses a given string.
		* Return: void.
 */
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
