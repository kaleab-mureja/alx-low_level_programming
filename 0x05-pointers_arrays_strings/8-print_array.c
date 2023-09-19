#include "main.h"
#include <stdio.h>

/**
		* print_array - Prints all numbers in an array.
		* @a: Array of integers.
		* @n: Number of elements to print.
		*
		* Description: Prints all numbers in an array.
		* Return: void.
 */
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
