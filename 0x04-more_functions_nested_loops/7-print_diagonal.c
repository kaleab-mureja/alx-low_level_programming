#include "main.h"

void print_diagonal(int n)
{
	int i = 0;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i < n)
	{
		j = 0;
		while (j++ < i + 1)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++
	}
}
