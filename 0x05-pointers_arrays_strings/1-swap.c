#include "main.h"

/**
	* swap_int - Swaps the values of two integers.
	* @a: Pointer to integer 1.
	* @b: Pointer to integer 2.
	*
	* Description: Swaps the values of two integers.
	* Return: void.
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
