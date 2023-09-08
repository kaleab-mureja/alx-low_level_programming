#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
	* main - do task
	* Description: do task
	* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is %i and is %s\n", n, n % 10, n % 10 > 5 ?
			"greater than 5" : n % 10 == 0 ? "0" : "less than 6 and not 0");
	return (0);
}
