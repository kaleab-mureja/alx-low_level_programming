#include "main.h"

void print_triangle(int size)
{
	int n=1;
	int i;

	if (size == 0)
	{
		_putchar('\n');
		return;
	}
	while (n <= size)
	{
		i=0;
		while (i++ < size - n)
		{
			_putchar(' ');
		}
		i=0;
		while (i++ < n)
		{
			_putchar('#');
		}
		_putchar('\n');
		n++;
	}
} 
