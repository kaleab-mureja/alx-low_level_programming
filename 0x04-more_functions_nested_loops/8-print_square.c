#include "main.h"

void print_square( int size) 
{
	int i = 0;
	int j;

	while (i++ < size)
	{
		j = 0;

		while (j++ < size)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
