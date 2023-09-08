#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
	* main - prints a boolean
	* Description: prints a boolean
	* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%i is %s\n", n, n < 0 ? "negative" : n == 0 ? "zero" : "positive");
	return (0);
}
