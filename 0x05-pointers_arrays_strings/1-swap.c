nclude "main.h"

/**
 * 	* swap_int - swaps values of two integers
 * 		* @a: pointer to integer 1
 * 			* @b: pointer to integer 2
 * 				* Description: swaps values of two integers
 * 					* Return: void
 * 					*/
void swap_int(int *a, int *b)
{
		int tmp = *b;
			*b = *a;
				*a = tmp;
}
