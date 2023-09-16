#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
	* main - prints a boolean
	* Description: prints a boolean
	* Return: 0
*/

void positive_or_negative(int n)
{
	printf("%i is %s\n", n, n < 0 ? "negative" : n == 0 ? "zero" : "positive");
}
