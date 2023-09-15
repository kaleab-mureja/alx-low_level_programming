#include "stdio.h"

int main (void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
			i++;
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
			i++;
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			i++;
		}
		else {
			printf("%i " , i);
			i++;
		}
		putchar('\n');
		return (0);
